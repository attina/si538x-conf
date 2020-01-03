/*
    i2cget.c - A user-space program to read an I2C register.
    Copyright (C) 2005-2012  Jean Delvare <jdelvare@suse.de>

    Based on i2cset.c:
    Copyright (C) 2001-2003  Frodo Looijaard <frodol@dds.nl>, and
                             Mark D. Studebaker <mdsxyz123@yahoo.com>
    Copyright (C) 2004-2005  Jean Delvare

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
    MA 02110-1301 USA.
*/

#include <sys/ioctl.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <linux/i2c.h>
#include <linux/i2c-dev.h>
#include "smbus.h"
#include "i2cbusses.h"
#include "si5383-registers-307_2mhz-1pps.h"

#define VERSION "1.0.0"

static void help(void) __attribute__ ((noreturn));

static void help(void)
{
	fprintf(stderr,
		"Usage: i2cget [-f] [-y] [-a] I2CBUS CHIP-ADDRESS [DATA-ADDRESS [MODE]]\n"
		"  I2CBUS is an integer or an I2C bus name\n"
		"  ADDRESS is an integer (0x08 - 0x77, or 0x00 - 0x7f if -a is given)\n"
		"  MODE is one of:\n"
		"    b (read byte data, default)\n"
		"    w (read word data)\n"
		"    c (write byte/read byte)\n"
		"    Append p for SMBus PEC\n");
	exit(1);
}

static int check_funcs(int file, int size, int daddress, int pec)
{
	unsigned long funcs;

	/* check adapter functionality */
	if (ioctl(file, I2C_FUNCS, &funcs) < 0) {
		fprintf(stderr, "Error: Could not get the adapter "
			"functionality matrix: %s\n", strerror(errno));
		return -1;
	}

	switch (size) {
	case I2C_SMBUS_BYTE:
		if (!(funcs & I2C_FUNC_SMBUS_READ_BYTE)) {
			fprintf(stderr, MISSING_FUNC_FMT, "SMBus receive byte");
			return -1;
		}
		if (daddress >= 0
		 && !(funcs & I2C_FUNC_SMBUS_WRITE_BYTE)) {
			fprintf(stderr, MISSING_FUNC_FMT, "SMBus send byte");
			return -1;
		}
		break;

	case I2C_SMBUS_BYTE_DATA:
		if (!(funcs & I2C_FUNC_SMBUS_READ_BYTE_DATA)) {
			fprintf(stderr, MISSING_FUNC_FMT, "SMBus read byte");
			return -1;
		}
		break;

	case I2C_SMBUS_WORD_DATA:
		if (!(funcs & I2C_FUNC_SMBUS_READ_WORD_DATA)) {
			fprintf(stderr, MISSING_FUNC_FMT, "SMBus read word");
			return -1;
		}
		break;
	}

	if (pec
	 && !(funcs & (I2C_FUNC_SMBUS_PEC | I2C_FUNC_I2C))) {
		fprintf(stderr, "Warning: Adapter does "
			"not seem to support PEC\n");
	}

	return 0;
}

int main(int argc, char *argv[])
{
	char *end;
	int res, i2cbus, address, size, file;
	int daddress;
	char filename[20];
	char buf[16];
	int pec = 0;
	int flags = 0;
	int version = 0, all_addrs = 0;

	/* handle (optional) flags first */
	while (1+flags < argc && argv[1+flags][0] == '-') {
		switch (argv[1+flags][1]) {
		case 'V': version = 1; break;
		default:
			fprintf(stderr, "Error: Unsupported option "
				"\"%s\"!\n", argv[1+flags]);
			help();
			exit(1);
		}
		flags++;
	}

	if (version) {
		fprintf(stderr, "i2cget version %s\n", VERSION);
		exit(0);
	}

	if (argc < flags + 2)
		help();

	i2cbus = lookup_i2c_bus(argv[flags+1]);
	if (i2cbus < 0)
		help();

	address = parse_i2c_address(argv[flags+2], all_addrs);
	if (address < 0)
		help();

	size = I2C_SMBUS_BYTE_DATA;
	daddress = 0xfe;

	file = open_i2c_dev(i2cbus, filename, sizeof(filename), 0);
	if (file < 0
	 || check_funcs(file, size, daddress, pec)
	 || set_slave_addr(file, address, 0))
		exit(1);

	if (pec && ioctl(file, I2C_PEC, 1) < 0) {
		fprintf(stderr, "Error: Could not set PEC: %s\n",
			strerror(errno));
		close(file);
		exit(1);
	}

	printf("Checking SI5383 device ready register...");

	switch (size) {
	case I2C_SMBUS_BYTE:
		if (daddress >= 0) {
			res = i2c_smbus_write_byte(file, daddress);
			if (res < 0)
				fprintf(stderr, "Warning - write failed\n");
		}
		res = i2c_smbus_read_byte(file);
		break;
	case I2C_SMBUS_WORD_DATA:
		res = i2c_smbus_read_word_data(file, daddress);
		break;
	default: /* I2C_SMBUS_BYTE_DATA */
		res = i2c_smbus_read_byte_data(file, daddress);
	}

	if (res < 0) {
		fprintf(stderr, "Error: Read failed\n");
		exit(2);
	}

	if (res != 0x0f)
	{
		printf("Device is not ready to read/write, status code: 0x0%x\n", res);
	}
	else
	{
		printf("OK\n");
		printf("Writing SI5383 registers ...\n");
		for (int i = 0; i < SI5383_REVD_REG_CONFIG_NUM_REGS; i++)
		{
			buf[0] = 0x20;
			buf[1] = (si5383_revd_registers[i].address >> 8) & 0xff;
			buf[2] = si5383_revd_registers[i].address & 0xff;
			buf[3] = si5383_revd_registers[i].value;
			buf[4] = 0;
			buf[5] = 0;
			buf[6] = 0;
			buf[7] = 0;
			buf[8] = 0;
			buf[9] = 0;
			buf[10] = 0;
			buf[11] = 0x01;

			if (write(file, buf, 12) != 12) {
				fprintf(stderr, "Error: Write register 0x04%x failed: %s\n", si5383_revd_registers[i].address, strerror(errno));
				break;

			if (i == 3)
				usleep(300);
			}
		}
		printf("Writing Done!\n");
	}

	close(file);

	exit(0);
}
