/*
 * Si5383 Rev D Configuration Register Export Header File
 *
 * This file represents a series of Silicon Labs Si5383 Rev D 
 * register writes that can be performed to load a single configuration 
 * on a device. It was created by a Silicon Labs ClockBuilder Pro
 * export tool.
 *
 * Part:		                                       Si5383 Rev D
 * Design ID:                                          
 * Includes Pre/Post Download Control Register Writes: Yes
 * Created By:                                         ClockBuilder Pro v2.39 [2019-12-11]
 * Timestamp:                                          2020-01-02 15:12:33 GMT+08:00
 *
 * A complete design report corresponding to this export is included at the end 
 * of this header file.
 *
 */

#ifndef SI5383_REVD_REG_CONFIG_HEADER
#define SI5383_REVD_REG_CONFIG_HEADER

#define SI5383_REVD_REG_CONFIG_NUM_REGS				750

typedef struct
{
	unsigned int address; /* 16-bit register address */
	unsigned char value; /* 8-bit register data */

} si5383_revd_register_t;

si5383_revd_register_t const si5383_revd_registers[SI5383_REVD_REG_CONFIG_NUM_REGS] =
{

	/* Start configuration preamble */
	{ 0x0B24, 0xC0 },
	{ 0x0B25, 0x04 },
	{ 0x0540, 0x01 },
	{ 0x5320, 0x00 },
	/* End configuration preamble */

	/* Delay 300 msec */
	/*    Delay is worst case time for device to complete any calibration */
	/*    that is running due to device state change previous to this script */
	/*    being processed. */

	/* Start configuration registers */
	{ 0x0006, 0x00 },
	{ 0x0007, 0x00 },
	{ 0x0008, 0x00 },
	{ 0x0016, 0x0F },
	{ 0x0017, 0x7C },
	{ 0x0018, 0xF7 },
	{ 0x0019, 0xDD },
	{ 0x001A, 0xDF },
	{ 0x002B, 0x02 },
	{ 0x002C, 0x08 },
	{ 0x002D, 0x40 },
	{ 0x002E, 0x00 },
	{ 0x002F, 0x00 },
	{ 0x0030, 0x00 },
	{ 0x0031, 0x00 },
	{ 0x0032, 0x00 },
	{ 0x0033, 0x00 },
	{ 0x0034, 0x39 },
	{ 0x0035, 0x00 },
	{ 0x0036, 0x00 },
	{ 0x0037, 0x00 },
	{ 0x0038, 0x00 },
	{ 0x0039, 0x00 },
	{ 0x003A, 0x00 },
	{ 0x003B, 0x00 },
	{ 0x003C, 0x39 },
	{ 0x003D, 0x00 },
	{ 0x003E, 0x00 },
	{ 0x003F, 0x80 },
	{ 0x0040, 0x03 },
	{ 0x0041, 0x00 },
	{ 0x0042, 0x00 },
	{ 0x0043, 0x00 },
	{ 0x0044, 0x0A },
	{ 0x0045, 0x0C },
	{ 0x0046, 0x00 },
	{ 0x0047, 0x00 },
	{ 0x0048, 0x00 },
	{ 0x0049, 0x00 },
	{ 0x004A, 0x00 },
	{ 0x004B, 0x00 },
	{ 0x004C, 0x00 },
	{ 0x004D, 0x00 },
	{ 0x004E, 0x00 },
	{ 0x004F, 0x00 },
	{ 0x0050, 0x0F },
	{ 0x0051, 0x00 },
	{ 0x0052, 0x00 },
	{ 0x0053, 0x00 },
	{ 0x0054, 0x00 },
	{ 0x0055, 0x00 },
	{ 0x0056, 0x00 },
	{ 0x0057, 0x00 },
	{ 0x0058, 0x00 },
	{ 0x0059, 0x00 },
	{ 0x005A, 0x00 },
	{ 0x005B, 0x00 },
	{ 0x005C, 0x00 },
	{ 0x005D, 0x00 },
	{ 0x005E, 0x00 },
	{ 0x005F, 0x00 },
	{ 0x0060, 0x00 },
	{ 0x0061, 0x00 },
	{ 0x0062, 0x00 },
	{ 0x0063, 0x00 },
	{ 0x0064, 0x00 },
	{ 0x0065, 0x00 },
	{ 0x0066, 0x00 },
	{ 0x0067, 0x00 },
	{ 0x0068, 0x00 },
	{ 0x0069, 0x01 },
	{ 0x0092, 0x02 },
	{ 0x0093, 0xA0 },
	{ 0x0094, 0x00 },
	{ 0x0095, 0x00 },
	{ 0x0096, 0x90 },
	{ 0x0097, 0x00 },
	{ 0x0098, 0x70 },
	{ 0x0099, 0x00 },
	{ 0x009A, 0x02 },
	{ 0x009B, 0x50 },
	{ 0x009C, 0x00 },
	{ 0x009D, 0x04 },
	{ 0x009E, 0x50 },
	{ 0x009F, 0x00 },
	{ 0x00A0, 0x30 },
	{ 0x00A1, 0x00 },
	{ 0x00A2, 0x00 },
	{ 0x00A4, 0x00 },
	{ 0x00A5, 0x00 },
	{ 0x00A6, 0x00 },
	{ 0x00A7, 0x00 },
	{ 0x00A9, 0x7A },
	{ 0x00AA, 0xB3 },
	{ 0x00AB, 0x03 },
	{ 0x00AC, 0x00 },
	{ 0x00AE, 0x00 },
	{ 0x00AF, 0x00 },
	{ 0x00B0, 0x00 },
	{ 0x00B1, 0x00 },
	{ 0x00B3, 0x00 },
	{ 0x00B4, 0x00 },
	{ 0x00B5, 0x00 },
	{ 0x00B6, 0x00 },
	{ 0x00E5, 0x00 },
	{ 0x00E6, 0x00 },
	{ 0x00E7, 0x00 },
	{ 0x00E8, 0x00 },
	{ 0x00E9, 0x00 },
	{ 0x00EA, 0xD1 },
	{ 0x00EB, 0xB1 },
	{ 0x00EC, 0x03 },
	{ 0x00ED, 0x00 },
	{ 0x00EE, 0x00 },
	{ 0x00EF, 0x00 },
	{ 0x00F0, 0x00 },
	{ 0x00F1, 0x00 },
	{ 0x00F2, 0x00 },
	{ 0x00F3, 0x00 },
	{ 0x00F4, 0x00 },
	{ 0x00F5, 0x00 },
	{ 0x0102, 0x01 },
	{ 0x010D, 0x02 },
	{ 0x010E, 0x09 },
	{ 0x010F, 0x3E },
	{ 0x0110, 0x1B },
	{ 0x0111, 0x04 },
	{ 0x0112, 0x02 },
	{ 0x0113, 0x09 },
	{ 0x0114, 0x3E },
	{ 0x0115, 0x1B },
	{ 0x0116, 0x04 },
	{ 0x0117, 0x01 },
	{ 0x0118, 0x09 },
	{ 0x0119, 0x33 },
	{ 0x011A, 0x08 },
	{ 0x011B, 0x00 },
	{ 0x011C, 0x02 },
	{ 0x011D, 0x09 },
	{ 0x011E, 0x3E },
	{ 0x011F, 0x1B },
	{ 0x0120, 0x04 },
	{ 0x0126, 0x01 },
	{ 0x0127, 0x09 },
	{ 0x0128, 0x3B },
	{ 0x0129, 0x28 },
	{ 0x012A, 0x00 },
	{ 0x012B, 0x02 },
	{ 0x012C, 0x09 },
	{ 0x012D, 0x3E },
	{ 0x012E, 0x1D },
	{ 0x012F, 0x04 },
	{ 0x0130, 0x10 },
	{ 0x0131, 0x09 },
	{ 0x0132, 0x33 },
	{ 0x0133, 0x0B },
	{ 0x0134, 0x04 },
	{ 0x013F, 0x00 },
	{ 0x0140, 0x00 },
	{ 0x0141, 0x40 },
	{ 0x0142, 0xFF },
	{ 0x0206, 0x00 },
	{ 0x0208, 0x00 },
	{ 0x0209, 0x00 },
	{ 0x020A, 0x00 },
	{ 0x020B, 0x00 },
	{ 0x020C, 0x00 },
	{ 0x020D, 0x00 },
	{ 0x020E, 0x00 },
	{ 0x020F, 0x00 },
	{ 0x0210, 0x00 },
	{ 0x0211, 0x00 },
	{ 0x0212, 0x00 },
	{ 0x0213, 0x00 },
	{ 0x0214, 0x00 },
	{ 0x0215, 0x00 },
	{ 0x0216, 0x00 },
	{ 0x0217, 0x00 },
	{ 0x0218, 0x00 },
	{ 0x0219, 0x00 },
	{ 0x021A, 0x00 },
	{ 0x021B, 0x00 },
	{ 0x021C, 0x00 },
	{ 0x021D, 0x00 },
	{ 0x021E, 0x00 },
	{ 0x021F, 0x00 },
	{ 0x0220, 0x00 },
	{ 0x0221, 0x00 },
	{ 0x0222, 0x00 },
	{ 0x0223, 0x00 },
	{ 0x0224, 0x00 },
	{ 0x0225, 0x00 },
	{ 0x0226, 0x05 },
	{ 0x0227, 0x00 },
	{ 0x0228, 0x00 },
	{ 0x0229, 0x00 },
	{ 0x022A, 0x00 },
	{ 0x022B, 0x00 },
	{ 0x022C, 0x01 },
	{ 0x022D, 0x00 },
	{ 0x022E, 0x00 },
	{ 0x022F, 0x00 },
	{ 0x0231, 0x0B },
	{ 0x0232, 0x0B },
	{ 0x0233, 0x0B },
	{ 0x0234, 0x0B },
	{ 0x0235, 0x00 },
	{ 0x0236, 0x00 },
	{ 0x0237, 0x00 },
	{ 0x0238, 0x94 },
	{ 0x0239, 0xE6 },
	{ 0x023A, 0x00 },
	{ 0x023B, 0x00 },
	{ 0x023C, 0x00 },
	{ 0x023D, 0x00 },
	{ 0x023E, 0xC8 },
	{ 0x024D, 0x09 },
	{ 0x024E, 0x00 },
	{ 0x024F, 0x00 },
	{ 0x0250, 0x09 },
	{ 0x0251, 0x00 },
	{ 0x0252, 0x00 },
	{ 0x0253, 0x00 },
	{ 0x0254, 0x00 },
	{ 0x0255, 0x00 },
	{ 0x0256, 0x01 },
	{ 0x0257, 0x00 },
	{ 0x0258, 0x00 },
	{ 0x025C, 0x00 },
	{ 0x025D, 0x00 },
	{ 0x025E, 0x00 },
	{ 0x025F, 0x31 },
	{ 0x0260, 0x00 },
	{ 0x0261, 0x00 },
	{ 0x0262, 0xFF },
	{ 0x0263, 0xBF },
	{ 0x0264, 0x5D },
	{ 0x026B, 0x00 },
	{ 0x026C, 0x00 },
	{ 0x026D, 0x00 },
	{ 0x026E, 0x00 },
	{ 0x026F, 0x00 },
	{ 0x0270, 0x00 },
	{ 0x0271, 0x00 },
	{ 0x0272, 0x00 },
	{ 0x028A, 0x00 },
	{ 0x028B, 0x00 },
	{ 0x028C, 0x00 },
	{ 0x028D, 0x00 },
	{ 0x028E, 0x00 },
	{ 0x028F, 0x00 },
	{ 0x0290, 0x00 },
	{ 0x0291, 0x00 },
	{ 0x0294, 0x88 },
	{ 0x0295, 0x88 },
	{ 0x0296, 0x00 },
	{ 0x0297, 0x02 },
	{ 0x0299, 0x02 },
	{ 0x029A, 0x00 },
	{ 0x029B, 0x00 },
	{ 0x029C, 0x00 },
	{ 0x029D, 0xF5 },
	{ 0x029E, 0x0E },
	{ 0x029F, 0x00 },
	{ 0x02A0, 0x00 },
	{ 0x02A1, 0x00 },
	{ 0x02A2, 0x00 },
	{ 0x02A3, 0x00 },
	{ 0x02A4, 0x00 },
	{ 0x02A5, 0x00 },
	{ 0x02A6, 0x00 },
	{ 0x02A7, 0x00 },
	{ 0x02A8, 0x00 },
	{ 0x02A9, 0x66 },
	{ 0x02AA, 0x26 },
	{ 0x02AB, 0x00 },
	{ 0x02AC, 0x00 },
	{ 0x02AD, 0x00 },
	{ 0x02AE, 0x00 },
	{ 0x02AF, 0x00 },
	{ 0x02B0, 0x00 },
	{ 0x02B1, 0x00 },
	{ 0x02B7, 0xFF },
	{ 0x02BC, 0x20 },
	{ 0x02BD, 0x04 },
	{ 0x02BE, 0x00 },
	{ 0x02BF, 0x00 },
	{ 0x02C0, 0x0B },
	{ 0x02C1, 0x36 },
	{ 0x02C2, 0x00 },
	{ 0x02C3, 0x00 },
	{ 0x02C4, 0x0B },
	{ 0x02C5, 0x36 },
	{ 0x0302, 0x00 },
	{ 0x0303, 0x00 },
	{ 0x0304, 0x00 },
	{ 0x0305, 0x00 },
	{ 0x0306, 0x00 },
	{ 0x0307, 0x00 },
	{ 0x0308, 0x00 },
	{ 0x0309, 0x00 },
	{ 0x030A, 0x00 },
	{ 0x030B, 0x00 },
	{ 0x030C, 0x00 },
	{ 0x030D, 0x00 },
	{ 0x030E, 0x00 },
	{ 0x030F, 0x00 },
	{ 0x0310, 0x00 },
	{ 0x0311, 0x00 },
	{ 0x0312, 0x00 },
	{ 0x0313, 0x00 },
	{ 0x0314, 0x00 },
	{ 0x0315, 0x00 },
	{ 0x0316, 0x00 },
	{ 0x0317, 0x00 },
	{ 0x0318, 0x00 },
	{ 0x0319, 0x00 },
	{ 0x031A, 0x00 },
	{ 0x031B, 0x00 },
	{ 0x031C, 0x00 },
	{ 0x031D, 0x00 },
	{ 0x031E, 0x00 },
	{ 0x031F, 0x00 },
	{ 0x0320, 0x00 },
	{ 0x0321, 0x00 },
	{ 0x0322, 0x00 },
	{ 0x0323, 0x00 },
	{ 0x0324, 0x00 },
	{ 0x0325, 0xA0 },
	{ 0x0326, 0x34 },
	{ 0x0327, 0x07 },
	{ 0x0328, 0x00 },
	{ 0x0329, 0x00 },
	{ 0x032A, 0x00 },
	{ 0x032B, 0x00 },
	{ 0x032C, 0xA0 },
	{ 0x032D, 0x00 },
	{ 0x0338, 0x00 },
	{ 0x033B, 0x00 },
	{ 0x033C, 0x00 },
	{ 0x033D, 0x00 },
	{ 0x033E, 0x00 },
	{ 0x033F, 0x00 },
	{ 0x0340, 0x00 },
	{ 0x0341, 0x00 },
	{ 0x0342, 0x00 },
	{ 0x0343, 0x00 },
	{ 0x0344, 0x00 },
	{ 0x0345, 0x00 },
	{ 0x0346, 0x00 },
	{ 0x0347, 0x00 },
	{ 0x0348, 0x00 },
	{ 0x0349, 0x00 },
	{ 0x034A, 0x00 },
	{ 0x034B, 0x00 },
	{ 0x034C, 0x00 },
	{ 0x034D, 0x00 },
	{ 0x034E, 0x00 },
	{ 0x034F, 0x00 },
	{ 0x0350, 0x00 },
	{ 0x0351, 0x00 },
	{ 0x0352, 0x00 },
	{ 0x0408, 0x00 },
	{ 0x0409, 0x00 },
	{ 0x040A, 0x00 },
	{ 0x040B, 0x00 },
	{ 0x040C, 0x00 },
	{ 0x040D, 0x00 },
	{ 0x040E, 0x00 },
	{ 0x040F, 0x00 },
	{ 0x0410, 0x00 },
	{ 0x0411, 0x00 },
	{ 0x0412, 0x00 },
	{ 0x0413, 0x00 },
	{ 0x0415, 0x00 },
	{ 0x0416, 0x00 },
	{ 0x0417, 0x00 },
	{ 0x0418, 0x00 },
	{ 0x0419, 0x00 },
	{ 0x041A, 0x00 },
	{ 0x041B, 0x00 },
	{ 0x041C, 0x00 },
	{ 0x041D, 0x00 },
	{ 0x041E, 0x00 },
	{ 0x041F, 0x00 },
	{ 0x0421, 0x2B },
	{ 0x0422, 0x01 },
	{ 0x0423, 0x00 },
	{ 0x0424, 0x00 },
	{ 0x0425, 0x00 },
	{ 0x0426, 0x00 },
	{ 0x0427, 0x00 },
	{ 0x0428, 0x00 },
	{ 0x0429, 0x00 },
	{ 0x042A, 0x00 },
	{ 0x042B, 0x01 },
	{ 0x042C, 0x0F },
	{ 0x042D, 0x03 },
	{ 0x042E, 0x00 },
	{ 0x042F, 0x00 },
	{ 0x0431, 0x00 },
	{ 0x0432, 0x00 },
	{ 0x0433, 0x04 },
	{ 0x0434, 0x00 },
	{ 0x0436, 0x06 },
	{ 0x0437, 0x00 },
	{ 0x0438, 0x00 },
	{ 0x0439, 0x00 },
	{ 0x043D, 0x0A },
	{ 0x043E, 0x06 },
	{ 0x0489, 0x00 },
	{ 0x048A, 0x00 },
	{ 0x049B, 0x18 },
	{ 0x049D, 0x00 },
	{ 0x049E, 0x00 },
	{ 0x049F, 0x00 },
	{ 0x04A0, 0x00 },
	{ 0x04A1, 0x00 },
	{ 0x04A2, 0x00 },
	{ 0x04A6, 0x00 },
	{ 0x0508, 0x10 },
	{ 0x0509, 0x1F },
	{ 0x050A, 0x0C },
	{ 0x050B, 0x0B },
	{ 0x050C, 0x3F },
	{ 0x050D, 0x3F },
	{ 0x050E, 0x10 },
	{ 0x050F, 0x21 },
	{ 0x0510, 0x0C },
	{ 0x0511, 0x0B },
	{ 0x0512, 0x3F },
	{ 0x0513, 0x3F },
	{ 0x0515, 0x00 },
	{ 0x0516, 0x00 },
	{ 0x0517, 0x00 },
	{ 0x0518, 0x78 },
	{ 0x0519, 0x67 },
	{ 0x051A, 0x05 },
	{ 0x051B, 0x00 },
	{ 0x051C, 0x00 },
	{ 0x051D, 0x00 },
	{ 0x051E, 0x00 },
	{ 0x051F, 0xFA },
	{ 0x0521, 0x3B },
	{ 0x053A, 0x02 },
	{ 0x053B, 0x03 },
	{ 0x053C, 0x00 },
	{ 0x053D, 0x11 },
	{ 0x053E, 0x06 },
	{ 0x0589, 0x0D },
	{ 0x058A, 0x00 },
	{ 0x059B, 0x98 },
	{ 0x059D, 0x10 },
	{ 0x059E, 0x21 },
	{ 0x059F, 0x0C },
	{ 0x05A0, 0x0B },
	{ 0x05A1, 0x3F },
	{ 0x05A2, 0x3F },
	{ 0x05A6, 0x00 },
	{ 0x0602, 0x01 },
	{ 0x0608, 0x00 },
	{ 0x0609, 0x00 },
	{ 0x060A, 0x00 },
	{ 0x060B, 0x00 },
	{ 0x060C, 0x00 },
	{ 0x060D, 0x00 },
	{ 0x060E, 0x00 },
	{ 0x060F, 0x00 },
	{ 0x0610, 0x00 },
	{ 0x0611, 0x00 },
	{ 0x0612, 0x00 },
	{ 0x0613, 0x00 },
	{ 0x0615, 0x00 },
	{ 0x0616, 0x00 },
	{ 0x0617, 0x00 },
	{ 0x0618, 0x00 },
	{ 0x0619, 0x00 },
	{ 0x061A, 0x00 },
	{ 0x061B, 0x00 },
	{ 0x061C, 0x00 },
	{ 0x061D, 0x00 },
	{ 0x061E, 0x00 },
	{ 0x061F, 0x00 },
	{ 0x0621, 0x2B },
	{ 0x0622, 0x01 },
	{ 0x0623, 0x00 },
	{ 0x0624, 0x00 },
	{ 0x0625, 0x00 },
	{ 0x0626, 0x00 },
	{ 0x0627, 0x00 },
	{ 0x0628, 0x00 },
	{ 0x0629, 0x00 },
	{ 0x062A, 0x00 },
	{ 0x062B, 0x01 },
	{ 0x062C, 0x0F },
	{ 0x062D, 0x03 },
	{ 0x062E, 0x00 },
	{ 0x062F, 0x00 },
	{ 0x0631, 0x00 },
	{ 0x0632, 0x00 },
	{ 0x0633, 0x04 },
	{ 0x0634, 0x00 },
	{ 0x0636, 0x06 },
	{ 0x0637, 0x00 },
	{ 0x0638, 0x00 },
	{ 0x0639, 0x00 },
	{ 0x063D, 0x0A },
	{ 0x063E, 0x06 },
	{ 0x0689, 0x0C },
	{ 0x068A, 0x00 },
	{ 0x069B, 0x18 },
	{ 0x069D, 0x00 },
	{ 0x069E, 0x00 },
	{ 0x069F, 0x00 },
	{ 0x06A0, 0x00 },
	{ 0x06A1, 0x00 },
	{ 0x06A2, 0x00 },
	{ 0x06A6, 0x00 },
	{ 0x0702, 0x11 },
	{ 0x0709, 0x00 },
	{ 0x070A, 0x00 },
	{ 0x070B, 0x00 },
	{ 0x070C, 0x00 },
	{ 0x070D, 0x00 },
	{ 0x070E, 0x00 },
	{ 0x070F, 0x00 },
	{ 0x0710, 0x00 },
	{ 0x0711, 0x00 },
	{ 0x0712, 0x00 },
	{ 0x0713, 0x00 },
	{ 0x0714, 0x00 },
	{ 0x0716, 0x00 },
	{ 0x0717, 0x00 },
	{ 0x0718, 0x00 },
	{ 0x0719, 0x00 },
	{ 0x071A, 0x00 },
	{ 0x071B, 0x9F },
	{ 0x071C, 0x24 },
	{ 0x071D, 0x00 },
	{ 0x071E, 0x00 },
	{ 0x071F, 0x00 },
	{ 0x0720, 0x80 },
	{ 0x0722, 0x3B },
	{ 0x0723, 0x01 },
	{ 0x0724, 0x00 },
	{ 0x0725, 0x00 },
	{ 0x0726, 0x00 },
	{ 0x0727, 0x00 },
	{ 0x0728, 0x00 },
	{ 0x0729, 0x00 },
	{ 0x072A, 0x00 },
	{ 0x072B, 0x05 },
	{ 0x072C, 0x00 },
	{ 0x072D, 0x0F },
	{ 0x072E, 0x03 },
	{ 0x072F, 0x00 },
	{ 0x0730, 0x00 },
	{ 0x0732, 0x00 },
	{ 0x0733, 0x00 },
	{ 0x0734, 0x04 },
	{ 0x0735, 0x00 },
	{ 0x0736, 0x00 },
	{ 0x0737, 0x00 },
	{ 0x0738, 0x00 },
	{ 0x0739, 0x00 },
	{ 0x073A, 0x00 },
	{ 0x073E, 0x0A },
	{ 0x073F, 0x06 },
	{ 0x0789, 0x0C },
	{ 0x078A, 0x00 },
	{ 0x079B, 0x18 },
	{ 0x079C, 0x0E },
	{ 0x079D, 0x00 },
	{ 0x079E, 0x00 },
	{ 0x079F, 0x00 },
	{ 0x07A0, 0x00 },
	{ 0x07A1, 0x00 },
	{ 0x07A2, 0x00 },
	{ 0x07A6, 0x00 },
	{ 0x07AA, 0x03 },
	{ 0x0943, 0x01 },
	{ 0x0949, 0x08 },
	{ 0x094A, 0x08 },
	{ 0x094E, 0x49 },
	{ 0x094F, 0x02 },
	{ 0x095E, 0x00 },
	{ 0x0A03, 0x08 },
	{ 0x0A04, 0x00 },
	{ 0x0A05, 0x08 },
	{ 0x0B2E, 0x98 },
	{ 0x0B44, 0x0F },
	{ 0x0B45, 0x05 },
	{ 0x0B46, 0x00 },
	{ 0x0B47, 0x07 },
	{ 0x0B48, 0x07 },
	{ 0x0B4A, 0x07 },
	{ 0x0B57, 0x0E },
	{ 0x0B58, 0x01 },
	{ 0x0D11, 0x0E },
	{ 0x0D12, 0x00 },
	{ 0x0D13, 0x00 },
	{ 0x0D14, 0x00 },
	{ 0x0D15, 0x0E },
	{ 0x0D16, 0x00 },
	{ 0x0D17, 0x00 },
	{ 0x0D18, 0x00 },
	{ 0x0D19, 0x0E },
	{ 0x0D1A, 0x00 },
	{ 0x0D1B, 0x00 },
	{ 0x0D1C, 0x00 },
	{ 0x0D1D, 0x80 },
	{ 0x0D1E, 0x55 },
	{ 0x0D1F, 0xB0 },
	{ 0x0D20, 0x01 },
	{ 0x5308, 0x00 },
	{ 0x5309, 0x00 },
	{ 0x530A, 0x00 },
	{ 0x530B, 0x00 },
	{ 0x530C, 0x00 },
	{ 0x530D, 0x00 },
	{ 0x530E, 0x00 },
	{ 0x530F, 0x00 },
	{ 0x5330, 0x08 },
	{ 0x5331, 0x00 },
	{ 0x5332, 0x00 },
	{ 0x5340, 0x00 },
	{ 0x5341, 0x0F },
	{ 0x5342, 0x00 },
	{ 0x5343, 0x02 },
	{ 0x5344, 0x00 },
	{ 0x5345, 0x00 },
	{ 0x5348, 0x00 },
	{ 0x5349, 0x00 },
	{ 0x534A, 0xDD },
	{ 0x534B, 0x5B },
	{ 0x534C, 0x00 },
	{ 0x534D, 0x00 },
	{ 0x534E, 0x00 },
	{ 0x534F, 0x39 },
	{ 0x5350, 0x00 },
	{ 0x5351, 0x00 },
	{ 0x5352, 0x18 },
	{ 0x5353, 0xC2 },
	{ 0x5358, 0x00 },
	{ 0x535C, 0x76 },
	{ 0x535D, 0x0E },
	{ 0x535E, 0x56 },
	{ 0x535F, 0x04 },
	{ 0x5360, 0x00 },
	{ 0x5361, 0x90 },
	{ 0x5362, 0x8D },
	{ 0x5363, 0xFD },
	{ 0x5364, 0x00 },
	{ 0x5365, 0x00 },
	{ 0x5366, 0x0C },
	{ 0x5367, 0x8A },
	{ 0x5368, 0x0A },
	{ 0x5369, 0xEC },
	{ 0x536A, 0x33 },
	{ 0x536B, 0xE2 },
	{ 0x536C, 0x00 },
	{ 0x536D, 0x02 },
	{ 0x536E, 0xBB },
	{ 0x536F, 0x0D },
	{ 0x5371, 0x00 },
	{ 0x5372, 0x00 },
	{ 0x5373, 0x00 },
	{ 0x5374, 0x7F },
	{ 0x5375, 0xFF },
	{ 0x5376, 0xFF },
	{ 0x5377, 0xFF },
	{ 0x5378, 0x04 },
	{ 0x5379, 0x00 },
	{ 0x537A, 0x00 },
	{ 0x537B, 0x00 },
	{ 0x537C, 0x00 },
	{ 0x537D, 0x00 },
	{ 0x537E, 0x00 },
	{ 0x537F, 0x00 },
	{ 0x5380, 0x3F },
	{ 0x5381, 0xFF },
	{ 0x5382, 0xFF },
	{ 0x5383, 0xFF },
	{ 0x5384, 0x0C },
	{ 0x5385, 0x13 },
	{ 0x5386, 0x00 },
	{ 0x5387, 0x40 },
	{ 0x5388, 0x0B },
	{ 0x5389, 0x11 },
	{ 0x538A, 0x00 },
	{ 0x538B, 0x35 },
	{ 0x538C, 0x0A },
	{ 0x538D, 0x0F },
	{ 0x538E, 0x00 },
	{ 0x538F, 0x72 },
	{ 0x5390, 0x0A },
	{ 0x5391, 0x0F },
	{ 0x5392, 0x00 },
	{ 0x5393, 0x00 },
	{ 0x53A1, 0x00 },
	{ 0x53A2, 0x00 },
	{ 0x53A3, 0x00 },
	{ 0x53A4, 0x00 },
	{ 0x53A5, 0x00 },
	{ 0x53A6, 0x00 },
	{ 0x53A7, 0x00 },
	{ 0x53A8, 0x00 },
	{ 0x53A9, 0x00 },
	{ 0x53AA, 0x00 },
	{ 0x53AB, 0x00 },
	{ 0x53AC, 0x00 },
	{ 0x53AD, 0x00 },
	{ 0x53AE, 0x00 },
	{ 0x53AF, 0x00 },
	{ 0x53B0, 0x00 },
	{ 0x53B1, 0x00 },
	{ 0x53B2, 0x00 },
	{ 0x53B3, 0x00 },
	{ 0x53B4, 0x00 },
	{ 0x53B5, 0x00 },
	{ 0x53B6, 0x00 },
	{ 0x53B7, 0x00 },
	{ 0x53B8, 0x00 },
	{ 0x53B9, 0x00 },
	{ 0x53BA, 0x00 },
	{ 0x53BB, 0x00 },
	{ 0x53BC, 0x00 },
	{ 0x53BD, 0x00 },
	{ 0x53BE, 0x00 },
	{ 0x53BF, 0x00 },
	{ 0x53C0, 0x00 },
	{ 0x53C1, 0x00 },
	{ 0x53C2, 0x00 },
	{ 0x53C3, 0x00 },
	{ 0x53D1, 0x06 },
	{ 0x53D2, 0x01 },
	{ 0x53E0, 0x01 },
	{ 0x53E1, 0x04 },
	{ 0x53E2, 0x10 },
	/* End configuration registers */

	/* Start configuration postamble */
	{ 0x0715, 0x01 },
	{ 0x0514, 0x01 },
	{ 0x001C, 0x01 },
	{ 0x0540, 0x00 },
	{ 0x0B24, 0xC3 },
	{ 0x0B25, 0x06 },
	{ 0x5320, 0x01 },
	/* End configuration postamble */

};

/*
 * Design Report
 *
 * Overview
 * ========
 * Part:               Si5383AB Rev D Firmware v1.0 (Official Release Build 19)
 * Project File:       C:\projects\5G\datasheet\clock\Si5383-RevD-BBU--307.2MHZ with 1PPS-Project.slabtimeproj
 * Design ID:          <none>
 * Created By:         ClockBuilder Pro v2.39 [2019-12-11]
 * Timestamp:          2020-01-02 15:12:32 GMT+08:00
 * 
 * Design Rule Check
 * =================
 * Errors:
 * - No errors
 * 
 * Warnings:
 * - When OUT6 is set to Unused but OUT5 is 1Hz, your board design must still apply power to VDD6 [1]
 * 
 * Footnotes:
 * [1] OUT6 is cascaded internally to OUT5 to achieve 1 Hz. Any 1.8V, 2.5V, or 3.3V voltage can be applied to VDD6 in this configuration. When writing to the Silicon Labs EVB, CBPro automatically enables VDD6 if OUT5 is 1 Hz.
 * 
 * Device Grade
 * ============
 * Maximum Output Frequency: 307.2 MHz
 * Frequency Synthesis Mode: Fractional
 * Frequency Plan Grade:     B
 * Minimum Base OPN:         Si5383B*
 * 
 * Device      Output Clock
 * Grade       Frequency Range       Typical Jitter
 * ---------   -------------------   --------------
 * Si5383A     100 Hz to 718.5 MHz   < 150 fs
 * Si5383B*    100 Hz to 350 MHz     "
 * 
 * * Based on your calculated frequency plan, a Si5383B grade device is
 * sufficient for your design. For more in-system configuration flexibility
 * (higher frequencies and/or to enable fractional synthesis), consider
 * selecting device grade Si5383A when specifying an ordering part number (OPN)
 * for your application. See the datasheet Ordering Guide for more information.
 * 
 * Design
 * ======
 * Host Interface:
 *    I/O Power Supply: VDDA (3.3V)
 *    I2C Addressing Mode: A0/A1 Pin Controlled
 *    I2C Address Range: 108d to 111d / 0x6C to 0x6F
 * 
 * XA/XB:
 *    48 MHz (XTAL - Crystal)
 * 
 * REF:
 *    10 MHz
 *    DSPLL B
 * 
 * Inputs:
 *     IN0: Unused
 *     IN1: Unused
 *     IN2: Unused
 *     IN3: Unused
 *     IN4: 1 Hz
 *          LVCMOS
 *          DSPLL D
 * 
 * Outputs:
 *    OUT0: 61.44 MHz
 *          Enabled, LVDS 1.8 V
 *          DSPLL D
 *    OUT1: 61.44 MHz
 *          Enabled, LVDS 1.8 V
 *          DSPLL D
 *    OUT2: Unused
 *    OUT3: 307.2 MHz
 *          Enabled, LVDS 1.8 V
 *          DSPLL D
 *    OUT4: Unused
 *    OUT5: 1 Hz
 *          Enabled, LVDS 1.8 V
 *          DSPLL D
 *    OUT6: Unused
 * 
 * Frequency Plan
 * ==============
 * Fvco = 14.16672 GHz
 * 
 * MXAXB = 295.14
 * MREF = 1416.672
 * 
 * DSPLL A is not used
 * DSPLL B:
 *    Fpfd = 2 MHz
 *    MB = 1416.672
 *    N1 = ---
 *    Nominal Bandwidth:
 *      Desired: 100.000 Hz
 *      Actual:  82.869 Hz
 *      Coefficients:
 *         BW0:  16
 *         BW1:  31
 *         BW2:  12
 *         BW3:  11
 *         BW4:  63
 *         BW5:  63
 *    Fastlock Bandwidth:
 *      Desired: 100.000 Hz
 *      Actual:  82.869 Hz
 *      Coefficients:
 *         BW0:  16
 *         BW1:  33
 *         BW2:  12
 *         BW3:  11
 *         BW4:  63
 *         BW5:  63
 * DSPLL C is not used
 * DSPLL D:
 *    Fpfd = 1 Hz
 *    Fdco = 1.2288 GHz
 *    MD = 4800000
 *    Extra divide by 256 after MD enabled for 1 Hz/pps
 *    N3 = 11.52890625
 *    Bandwidth:
 *       Desired: 1.000 mHz
 *       Actual:  910.692 ¦ÌHz
 *       Coefficients:
 *          NL_NF: 6
 *          NL_NI: 1
 *    Holdover:
 *       Holdover Exit Mode:    Auto
 *       Data Length (Compute): 16 s
 *       Data Length (Ignore):  16 s
 *    LOL:
 *       Trigger Count:  3
 *       Trigger Threshold:
 *          Desired:     100 ¦Ìs
 *          Actual:      100.000 ¦Ìs
 *       Clear Count:    1
 *       Clear Threshold:
 *          Desired:     100 ns
 *          Actual:      100.588 ns
 *    Phase Adjust:
 *       Desired: 0.0 s
 *       Actual:  0.0 s
 * 
 * P dividers:
 *    P0    = Unused
 *    P1    = Unused
 *    P2    = Unused
 *    Pxaxb = 1
 *    Pref  = 5
 * 
 * R dividers:
 *    R0 = 20
 *    R1 = 20
 *    R2 = Unused
 *    R3 = 4
 *    R4 = Unused
 *    R5 = 100
 *    R6 = 12288000
 *    R6 Fanout Enabled
 * 
 * Dividers listed above show effective values. These values are translated to register settings by ClockBuilder Pro. For the actual register values, see below. Refer to the Family Reference Manual for information on registers related to frequency plan.
 * 
 * Digitally Controlled Oscillator (DCO)
 * =====================================
 * 
 * DSPLL A: DCO Disabled
 * 
 * DSPLL B: DCO Not Supported
 * 
 * DSPLL C: DCO Disabled
 * 
 * DSPLL D: DCO Enabled
 * 
 *                              Fvco                         
 *    Fout = ------------------------------------------------
 *           (N3 ¡À n * DCO_FSTEPW * 2^DCO_SCALE * 2^-39) * Rz
 * 
 *    Fvco:               14.16672 GHz
 *    N3_NUM:             14757
 *    N3_DEN:             1280
 *    DCO_SCALE:          0
 *    DCO_FSTEPW:         6338
 * 
 *    Desired Step Size:  1 ppb
 *    Actual Step Size:   0.999986867895... ppb
 *    Range:              10 ppm
 * 
 *    OUT0
 *         R0:            20
 *         Initial Freq:  61.44 MHz
 *         Step Size:     0.061439193163... Hz
 *         Min Freq:      61.439385614212... MHz
 *         Max Freq:      61.440614398074... MHz
 * 
 *    OUT1
 *         R1:            20
 *         Initial Freq:  61.44 MHz
 *         Step Size:     0.061439193163... Hz
 *         Min Freq:      61.439385614212... MHz
 *         Max Freq:      61.440614398074... MHz
 * 
 *    OUT3
 *         R3:            4
 *         Initial Freq:  307.2 MHz
 *         Step Size:     0.307195965817... Hz
 *         Min Freq:      307.196928071063... MHz
 *         Max Freq:      307.203071990374... MHz
 * 
 *    OUT5
 *         R5:            1228800000
 *         Initial Freq:  1 Hz
 *         Step Size:     0.000000000999... Hz
 *         Min Freq:      0.999990000231... Hz
 *         Max Freq:      1.000009999968... Hz
 * 
 * Estimated Power & Junction Temperature
 * ======================================
 * Assumptions:
 * 
 * Revision: D
 * VDD:      1.8 V
 * Ta:       25 ¡ãC
 * Theta-JA: 24.0 ¡ãC/W
 * Airflow:  0 m/s
 * 
 * Total Power: 897 mW, On Chip Power: 873 mW, Tj: 46 ¡ãC
 * 
 *         Frequency  Format   Voltage   Current     Power
 *         ---------  ------  --------  --------  --------
 * VDD                           1.8 V  157.8 mA    284 mW
 * VDDA                          3.3 V  152.0 mA    502 mW
 * VDDO0   61.44 MHz  LVDS       1.8 V   15.3 mA     28 mW
 * VDDO1   61.44 MHz  LVDS       1.8 V   15.3 mA     28 mW
 * VDDO2      Unused                                      
 * VDDO3   307.2 MHz  LVDS       1.8 V   16.4 mA     29 mW
 * VDDO4      Unused                                      
 * VDDO5        1 Hz  LVDS       1.8 V   15.0 mA     27 mW
 * VDDO6      Unused                                      
 *                                      --------  --------
 *                               Total  371.7 mA    897 mW
 * 
 * Note:
 * 
 * -Tj is junction temperature. Tj must be less than 125 ¡ãC (on Si5383 Revision D) for device to comply with datasheet specifications. Tj = Ta + Theta_JA*On_Chip_Power.
 * -Overall power includes on-chip power dissipation and adds differential load power dissipation to estimate total power requirements.
 * -Above are estimates only: power and temperature should be measured on your PCB.
 * -Selection of appropriate Theta-JA is required for most accurate estimate. Ideally, select 'User Specified Theta-JA' and enter a Theta-JA value based on the thermal properties of your PCB.
 * 
 * Settings
 * ========
 * 
 * Location      Setting Name                Decimal Value      Hex Value        
 * ------------  --------------------------  -----------------  -----------------
 * 0x0006[23:0]  TOOL_VERSION                0                  0x000000         
 * 0x0016[0]     LOL_ON_HOLD_PLLA            1                  0x1              
 * 0x0016[1]     LOL_ON_HOLD_PLLB            1                  0x1              
 * 0x0016[2]     LOL_ON_HOLD_PLLC            1                  0x1              
 * 0x0016[3]     LOL_ON_HOLD_PLLD            1                  0x1              
 * 0x0017[0]     SYSINCAL_INTR_MSK           0                  0x0              
 * 0x0017[1]     LOSXAXB_INTR_MSK            0                  0x0              
 * 0x0017[5]     SMB_TMOUT_INTR_MSK          1                  0x1              
 * 0x0017[7:6]   INTR_LOS_CMOS_MSK           1                  0x1              
 * 0x0018[3:0]   LOS_INTR_MSK                7                  0x7              
 * 0x0018[7:4]   OOF_INTR_MSK                15                 0xF              
 * 0x0019[0]     LOL_INTR_MSK_PLLA           1                  0x1              
 * 0x0019[1]     LOL_INTR_MSK_PLLB           0                  0x0              
 * 0x0019[2]     LOL_INTR_MSK_PLLC           1                  0x1              
 * 0x0019[3]     LOL_INTR_MSK_PLLD           1                  0x1              
 * 0x0019[4]     HOLD_INTR_MSK_PLLA          1                  0x1              
 * 0x0019[6]     HOLD_INTR_MSK_PLLC          1                  0x1              
 * 0x0019[7]     HOLD_INTR_MSK_PLLD          1                  0x1              
 * 0x001A[4]     CAL_INTR_MSK_PLLA           1                  0x1              
 * 0x001A[5]     CAL_INTR_MSK_PLLB           0                  0x0              
 * 0x001A[6]     CAL_INTR_MSK_PLLC           1                  0x1              
 * 0x001A[7]     CAL_INTR_MSK_PLLD           1                  0x1              
 * 0x002B[3]     SPI_3WIRE                   0                  0x0              
 * 0x002C[3:0]   LOS_EN                      8                  0x8              
 * 0x002C[4]     LOSXAXB_DIS                 0                  0x0              
 * 0x002D[1:0]   LOS0_VAL_TIME               0                  0x0              
 * 0x002D[3:2]   LOS1_VAL_TIME               0                  0x0              
 * 0x002D[5:4]   LOS2_VAL_TIME               0                  0x0              
 * 0x002D[7:6]   LOS3_VAL_TIME               1                  0x1              
 * 0x002E[15:0]  LOS0_TRG_THR                0                  0x0000           
 * 0x0030[15:0]  LOS1_TRG_THR                0                  0x0000           
 * 0x0032[15:0]  LOS2_TRG_THR                0                  0x0000           
 * 0x0034[15:0]  LOS3_TRG_THR                57                 0x0039           
 * 0x0036[15:0]  LOS0_CLR_THR                0                  0x0000           
 * 0x0038[15:0]  LOS1_CLR_THR                0                  0x0000           
 * 0x003A[15:0]  LOS2_CLR_THR                0                  0x0000           
 * 0x003C[15:0]  LOS3_CLR_THR                57                 0x0039           
 * 0x003E[3:0]   LOS_EN_1HZ                  0                  0x0              
 * 0x003F[3:0]   OOF_EN                      0                  0x0              
 * 0x003F[7:4]   FAST_OOF_EN                 8                  0x8              
 * 0x0040[2:0]   OOF_REF_SEL                 3                  0x3              
 * 0x0041[4:0]   OOF0_DIV_SEL                0                  0x00             
 * 0x0042[4:0]   OOF1_DIV_SEL                0                  0x00             
 * 0x0043[4:0]   OOF2_DIV_SEL                0                  0x00             
 * 0x0044[4:0]   OOF3_DIV_SEL                10                 0x0A             
 * 0x0045[4:0]   OOFXO_DIV_SEL               12                 0x0C             
 * 0x0046[7:0]   OOF0_SET_THR                0                  0x00             
 * 0x0047[7:0]   OOF1_SET_THR                0                  0x00             
 * 0x0048[7:0]   OOF2_SET_THR                0                  0x00             
 * 0x0049[7:0]   OOF3_SET_THR                0                  0x00             
 * 0x004A[7:0]   OOF0_CLR_THR                0                  0x00             
 * 0x004B[7:0]   OOF1_CLR_THR                0                  0x00             
 * 0x004C[7:0]   OOF2_CLR_THR                0                  0x00             
 * 0x004D[7:0]   OOF3_CLR_THR                0                  0x00             
 * 0x004E[2:0]   OOF0_DETWIN_SEL             0                  0x0              
 * 0x004E[6:4]   OOF1_DETWIN_SEL             0                  0x0              
 * 0x004F[2:0]   OOF2_DETWIN_SEL             0                  0x0              
 * 0x004F[6:4]   OOF3_DETWIN_SEL             0                  0x0              
 * 0x0050[3:0]   OOF_ON_LOS                  15                 0xF              
 * 0x0051[3:0]   FAST_OOF0_SET_THR           0                  0x0              
 * 0x0052[3:0]   FAST_OOF1_SET_THR           0                  0x0              
 * 0x0053[3:0]   FAST_OOF2_SET_THR           0                  0x0              
 * 0x0054[3:0]   FAST_OOF3_SET_THR           0                  0x0              
 * 0x0055[3:0]   FAST_OOF0_CLR_THR           0                  0x0              
 * 0x0056[3:0]   FAST_OOF1_CLR_THR           0                  0x0              
 * 0x0057[3:0]   FAST_OOF2_CLR_THR           0                  0x0              
 * 0x0058[3:0]   FAST_OOF3_CLR_THR           0                  0x0              
 * 0x0059[1:0]   FAST_OOF0_DETWIN_SEL        0                  0x0              
 * 0x0059[3:2]   FAST_OOF1_DETWIN_SEL        0                  0x0              
 * 0x0059[5:4]   FAST_OOF2_DETWIN_SEL        0                  0x0              
 * 0x0059[7:6]   FAST_OOF3_DETWIN_SEL        0                  0x0              
 * 0x005A[25:0]  OOF0_RATIO_REF              0                  0x0000000        
 * 0x005E[25:0]  OOF1_RATIO_REF              0                  0x0000000        
 * 0x0062[25:0]  OOF2_RATIO_REF              0                  0x0000000        
 * 0x0066[25:0]  OOF3_RATIO_REF              16777216           0x1000000        
 * 0x0092[0]     LOL_FST_EN_PLLA             0                  0x0              
 * 0x0092[1]     LOL_FST_EN_PLLB             1                  0x1              
 * 0x0092[2]     LOL_FST_EN_PLLC             0                  0x0              
 * 0x0092[3]     LOL_FST_EN_PLLD             0                  0x0              
 * 0x0093[3:0]   LOL_FST_DETWIN_SEL_PLLA     0                  0x0              
 * 0x0093[7:4]   LOL_FST_DETWIN_SEL_PLLB     10                 0xA              
 * 0x0094[3:0]   LOL_FST_DETWIN_SEL_PLLC     0                  0x0              
 * 0x0094[7:4]   LOL_FST_DETWIN_SEL_PLLD     0                  0x0              
 * 0x0095[1:0]   LOL_FST_VALWIN_SEL_PLLA     0                  0x0              
 * 0x0095[3:2]   LOL_FST_VALWIN_SEL_PLLB     0                  0x0              
 * 0x0095[5:4]   LOL_FST_VALWIN_SEL_PLLC     0                  0x0              
 * 0x0095[7:6]   LOL_FST_VALWIN_SEL_PLLD     0                  0x0              
 * 0x0096[3:0]   LOL_FST_SET_THR_SEL_PLLA    0                  0x0              
 * 0x0096[7:4]   LOL_FST_SET_THR_SEL_PLLB    9                  0x9              
 * 0x0097[3:0]   LOL_FST_SET_THR_SEL_PLLC    0                  0x0              
 * 0x0097[7:4]   LOL_FST_SET_THR_SEL_PLLD    0                  0x0              
 * 0x0098[3:0]   LOL_FST_CLR_THR_SEL_PLLA    0                  0x0              
 * 0x0098[7:4]   LOL_FST_CLR_THR_SEL_PLLB    7                  0x7              
 * 0x0099[3:0]   LOL_FST_CLR_THR_SEL_PLLC    0                  0x0              
 * 0x0099[7:4]   LOL_FST_CLR_THR_SEL_PLLD    0                  0x0              
 * 0x009A[0]     LOL_SLOW_EN_PLLA            0                  0x0              
 * 0x009A[1]     LOL_SLOW_EN_PLLB            1                  0x1              
 * 0x009A[2]     LOL_SLOW_EN_PLLC            0                  0x0              
 * 0x009A[3]     LOL_SLOW_EN_PLLD            0                  0x0              
 * 0x009B[3:0]   LOL_SLW_DETWIN_SEL_PLLA     0                  0x0              
 * 0x009B[7:4]   LOL_SLW_DETWIN_SEL_PLLB     5                  0x5              
 * 0x009C[3:0]   LOL_SLW_DETWIN_SEL_PLLC     0                  0x0              
 * 0x009C[7:4]   LOL_SLW_DETWIN_SEL_PLLD     0                  0x0              
 * 0x009D[1:0]   LOL_SLW_VALWIN_SEL_PLLA     0                  0x0              
 * 0x009D[3:2]   LOL_SLW_VALWIN_SEL_PLLB     1                  0x1              
 * 0x009D[5:4]   LOL_SLW_VALWIN_SEL_PLLC     0                  0x0              
 * 0x009D[7:6]   LOL_SLW_VALWIN_SEL_PLLD     0                  0x0              
 * 0x009E[3:0]   LOL_SLW_SET_THR_PLLA        0                  0x0              
 * 0x009E[7:4]   LOL_SLW_SET_THR_PLLB        5                  0x5              
 * 0x009F[3:0]   LOL_SLW_SET_THR_PLLC        0                  0x0              
 * 0x009F[7:4]   LOL_SLW_SET_THR_PLLD        0                  0x0              
 * 0x00A0[3:0]   LOL_SLW_CLR_THR_PLLA        0                  0x0              
 * 0x00A0[7:4]   LOL_SLW_CLR_THR_PLLB        3                  0x3              
 * 0x00A1[3:0]   LOL_SLW_CLR_THR_PLLC        0                  0x0              
 * 0x00A1[7:4]   LOL_SLW_CLR_THR_PLLD        0                  0x0              
 * 0x00A2[0]     LOL_TIMER_EN_PLLA           0                  0x0              
 * 0x00A2[1]     LOL_TIMER_EN_PLLB           0                  0x0              
 * 0x00A2[2]     LOL_TIMER_EN_PLLC           0                  0x0              
 * 0x00A2[3]     LOL_TIMER_EN_PLLD           0                  0x0              
 * 0x00A4[28:0]  LOL_CLR_DELAY_DIV256_PLLA   0                  0x00000000       
 * 0x00A9[28:0]  LOL_CLR_DELAY_DIV256_PLLB   242554             0x0003B37A       
 * 0x00AE[28:0]  LOL_CLR_DELAY_DIV256_PLLC   0                  0x00000000       
 * 0x00B3[28:0]  LOL_CLR_DELAY_DIV256_PLLD   0                  0x00000000       
 * 0x00E5[0]     FASTLOCK_EXTEND_MASTER_DIS  0                  0x0              
 * 0x00E5[4]     FASTLOCK_EXTEND_EN_PLLA     0                  0x0              
 * 0x00E5[5]     FASTLOCK_EXTEND_EN_PLLB     0                  0x0              
 * 0x00E5[6]     FASTLOCK_EXTEND_EN_PLLC     0                  0x0              
 * 0x00E5[7]     FASTLOCK_EXTEND_EN_PLLD     0                  0x0              
 * 0x00E6[28:0]  FASTLOCK_EXTEND_PLLA        0                  0x00000000       
 * 0x00EA[28:0]  FASTLOCK_EXTEND_PLLB        242129             0x0003B1D1       
 * 0x00EE[28:0]  FASTLOCK_EXTEND_PLLC        0                  0x00000000       
 * 0x00F2[28:0]  FASTLOCK_EXTEND_PLLD        0                  0x00000000       
 * 0x0102[0]     OUTALL_DISABLE_LOW          1                  0x1              
 * 0x010D[0]     OUT0_PDN                    0                  0x0              
 * 0x010D[1]     OUT0_OE                     1                  0x1              
 * 0x010D[2]     OUT0_RDIV_FORCE2            0                  0x0              
 * 0x010E[2:0]   OUT0_FORMAT                 1                  0x1              
 * 0x010E[3]     OUT0_SYNC_EN                1                  0x1              
 * 0x010E[5:4]   OUT0_DIS_STATE              0                  0x0              
 * 0x010E[7:6]   OUT0_CMOS_DRV               0                  0x0              
 * 0x010F[3:0]   OUT0_CM                     14                 0xE              
 * 0x010F[6:4]   OUT0_AMPL                   3                  0x3              
 * 0x0110[2:0]   OUT0_MUX_SEL                3                  0x3              
 * 0x0110[5:4]   OUT0_VDD_SEL                1                  0x1              
 * 0x0110[3]     OUT0_VDD_SEL_EN             1                  0x1              
 * 0x0110[7:6]   OUT0_INV                    0                  0x0              
 * 0x0111[2:0]   OUT0_DIS_SRC                4                  0x4              
 * 0x0112[0]     OUT1_PDN                    0                  0x0              
 * 0x0112[1]     OUT1_OE                     1                  0x1              
 * 0x0112[2]     OUT1_RDIV_FORCE2            0                  0x0              
 * 0x0113[2:0]   OUT1_FORMAT                 1                  0x1              
 * 0x0113[3]     OUT1_SYNC_EN                1                  0x1              
 * 0x0113[5:4]   OUT1_DIS_STATE              0                  0x0              
 * 0x0113[7:6]   OUT1_CMOS_DRV               0                  0x0              
 * 0x0114[3:0]   OUT1_CM                     14                 0xE              
 * 0x0114[6:4]   OUT1_AMPL                   3                  0x3              
 * 0x0115[2:0]   OUT1_MUX_SEL                3                  0x3              
 * 0x0115[5:4]   OUT1_VDD_SEL                1                  0x1              
 * 0x0115[3]     OUT1_VDD_SEL_EN             1                  0x1              
 * 0x0115[7:6]   OUT1_INV                    0                  0x0              
 * 0x0116[2:0]   OUT1_DIS_SRC                4                  0x4              
 * 0x0117[0]     OUT2_PDN                    1                  0x1              
 * 0x0117[1]     OUT2_OE                     0                  0x0              
 * 0x0117[2]     OUT2_RDIV_FORCE2            0                  0x0              
 * 0x0118[2:0]   OUT2_FORMAT                 1                  0x1              
 * 0x0118[3]     OUT2_SYNC_EN                1                  0x1              
 * 0x0118[5:4]   OUT2_DIS_STATE              0                  0x0              
 * 0x0118[7:6]   OUT2_CMOS_DRV               0                  0x0              
 * 0x0119[3:0]   OUT2_CM                     3                  0x3              
 * 0x0119[6:4]   OUT2_AMPL                   3                  0x3              
 * 0x011A[2:0]   OUT2_MUX_SEL                0                  0x0              
 * 0x011A[5:4]   OUT2_VDD_SEL                0                  0x0              
 * 0x011A[3]     OUT2_VDD_SEL_EN             1                  0x1              
 * 0x011A[7:6]   OUT2_INV                    0                  0x0              
 * 0x011B[2:0]   OUT2_DIS_SRC                0                  0x0              
 * 0x011C[0]     OUT3_PDN                    0                  0x0              
 * 0x011C[1]     OUT3_OE                     1                  0x1              
 * 0x011C[2]     OUT3_RDIV_FORCE2            0                  0x0              
 * 0x011D[2:0]   OUT3_FORMAT                 1                  0x1              
 * 0x011D[3]     OUT3_SYNC_EN                1                  0x1              
 * 0x011D[5:4]   OUT3_DIS_STATE              0                  0x0              
 * 0x011D[7:6]   OUT3_CMOS_DRV               0                  0x0              
 * 0x011E[3:0]   OUT3_CM                     14                 0xE              
 * 0x011E[6:4]   OUT3_AMPL                   3                  0x3              
 * 0x011F[2:0]   OUT3_MUX_SEL                3                  0x3              
 * 0x011F[5:4]   OUT3_VDD_SEL                1                  0x1              
 * 0x011F[3]     OUT3_VDD_SEL_EN             1                  0x1              
 * 0x011F[7:6]   OUT3_INV                    0                  0x0              
 * 0x0120[2:0]   OUT3_DIS_SRC                4                  0x4              
 * 0x0126[0]     OUT4_PDN                    1                  0x1              
 * 0x0126[1]     OUT4_OE                     0                  0x0              
 * 0x0126[2]     OUT4_RDIV_FORCE2            0                  0x0              
 * 0x0127[2:0]   OUT4_FORMAT                 1                  0x1              
 * 0x0127[3]     OUT4_SYNC_EN                1                  0x1              
 * 0x0127[5:4]   OUT4_DIS_STATE              0                  0x0              
 * 0x0127[7:6]   OUT4_CMOS_DRV               0                  0x0              
 * 0x0128[3:0]   OUT4_CM                     11                 0xB              
 * 0x0128[6:4]   OUT4_AMPL                   3                  0x3              
 * 0x0129[2:0]   OUT4_MUX_SEL                0                  0x0              
 * 0x0129[5:4]   OUT4_VDD_SEL                2                  0x2              
 * 0x0129[3]     OUT4_VDD_SEL_EN             1                  0x1              
 * 0x0129[7:6]   OUT4_INV                    0                  0x0              
 * 0x012A[2:0]   OUT4_DIS_SRC                0                  0x0              
 * 0x012B[0]     OUT5_PDN                    0                  0x0              
 * 0x012B[1]     OUT5_OE                     1                  0x1              
 * 0x012B[2]     OUT5_RDIV_FORCE2            0                  0x0              
 * 0x012C[2:0]   OUT5_FORMAT                 1                  0x1              
 * 0x012C[3]     OUT5_SYNC_EN                1                  0x1              
 * 0x012C[5:4]   OUT5_DIS_STATE              0                  0x0              
 * 0x012C[7:6]   OUT5_CMOS_DRV               0                  0x0              
 * 0x012D[3:0]   OUT5_CM                     14                 0xE              
 * 0x012D[6:4]   OUT5_AMPL                   3                  0x3              
 * 0x012E[2:0]   OUT5_MUX_SEL                5                  0x5              
 * 0x012E[5:4]   OUT5_VDD_SEL                1                  0x1              
 * 0x012E[3]     OUT5_VDD_SEL_EN             1                  0x1              
 * 0x012E[7:6]   OUT5_INV                    0                  0x0              
 * 0x012F[2:0]   OUT5_DIS_SRC                4                  0x4              
 * 0x0130[0]     OUT6_PDN                    0                  0x0              
 * 0x0130[1]     OUT6_OE                     0                  0x0              
 * 0x0130[2]     OUT6_RDIV_FORCE2            0                  0x0              
 * 0x0130[4]     OUT6_CASCADE_EN             1                  0x1              
 * 0x0131[2:0]   OUT6_FORMAT                 1                  0x1              
 * 0x0131[3]     OUT6_SYNC_EN                1                  0x1              
 * 0x0131[5:4]   OUT6_DIS_STATE              0                  0x0              
 * 0x0131[7:6]   OUT6_CMOS_DRV               0                  0x0              
 * 0x0132[3:0]   OUT6_CM                     3                  0x3              
 * 0x0132[6:4]   OUT6_AMPL                   3                  0x3              
 * 0x0133[2:0]   OUT6_MUX_SEL                3                  0x3              
 * 0x0133[5:4]   OUT6_VDD_SEL                0                  0x0              
 * 0x0133[3]     OUT6_VDD_SEL_EN             1                  0x1              
 * 0x0133[7:6]   OUT6_INV                    0                  0x0              
 * 0x0134[2:0]   OUT6_DIS_SRC                4                  0x4              
 * 0x013F[11:0]  OUTX_ALWAYS_ON              0                  0x000            
 * 0x0141[0]     OUT_DIS_MSK_PLLA            0                  0x0              
 * 0x0141[2]     OUT_DIS_MSK_PLLC            0                  0x0              
 * 0x0141[3]     OUT_DIS_MSK_PLLD            0                  0x0              
 * 0x0141[5]     OUT_DIS_LOL_MSK             0                  0x0              
 * 0x0141[6]     OUT_DIS_LOSXAXB_MSK         1                  0x1              
 * 0x0141[7]     OUT_DIS_MSK_LOS_PFD         0                  0x0              
 * 0x0142[0]     OUT_DIS_MSK_LOL_PLLA        1                  0x1              
 * 0x0142[2]     OUT_DIS_MSK_LOL_PLLC        1                  0x1              
 * 0x0142[3]     OUT_DIS_MSK_LOL_PLLD        1                  0x1              
 * 0x0142[4]     OUT_DIS_MSK_HOLD_PLLA       1                  0x1              
 * 0x0142[6]     OUT_DIS_MSK_HOLD_PLLC       1                  0x1              
 * 0x0142[7]     OUT_DIS_MSK_HOLD_PLLD       1                  0x1              
 * 0x0206[1:0]   PXAXB                       0                  0x0              
 * 0x0208[47:0]  P0_NUM                      0                  0x000000000000   
 * 0x020E[31:0]  P0_DEN                      0                  0x00000000       
 * 0x0212[47:0]  P1_NUM                      0                  0x000000000000   
 * 0x0218[31:0]  P1_DEN                      0                  0x00000000       
 * 0x021C[47:0]  P2_NUM                      0                  0x000000000000   
 * 0x0222[31:0]  P2_DEN                      0                  0x00000000       
 * 0x0226[47:0]  P3_NUM                      5                  0x000000000005   
 * 0x022C[31:0]  P3_DEN                      1                  0x00000001       
 * 0x0231[3:0]   P0_FRACN_MODE               11                 0xB              
 * 0x0231[4]     P0_FRACN_EN                 0                  0x0              
 * 0x0232[3:0]   P1_FRACN_MODE               11                 0xB              
 * 0x0232[4]     P1_FRACN_EN                 0                  0x0              
 * 0x0233[3:0]   P2_FRACN_MODE               11                 0xB              
 * 0x0233[4]     P2_FRACN_EN                 0                  0x0              
 * 0x0234[3:0]   P3_FRACN_MODE               11                 0xB              
 * 0x0234[4]     P3_FRACN_EN                 0                  0x0              
 * 0x0235[43:0]  MXAXB_NUM                   990325506048       0x0E694000000    
 * 0x023B[31:0]  MXAXB_DEN                   3355443200         0xC8000000       
 * 0x024D[23:0]  R0_REG                      9                  0x000009         
 * 0x0250[23:0]  R1_REG                      9                  0x000009         
 * 0x0253[23:0]  R2_REG                      0                  0x000000         
 * 0x0256[23:0]  R3_REG                      1                  0x000001         
 * 0x025C[23:0]  R4_REG                      0                  0x000000         
 * 0x025F[23:0]  R5_REG                      49                 0x000031         
 * 0x0262[23:0]  R6_REG                      6143999            0x5DBFFF         
 * 0x026B[7:0]   DESIGN_ID0                  0                  0x00             
 * 0x026C[7:0]   DESIGN_ID1                  0                  0x00             
 * 0x026D[7:0]   DESIGN_ID2                  0                  0x00             
 * 0x026E[7:0]   DESIGN_ID3                  0                  0x00             
 * 0x026F[7:0]   DESIGN_ID4                  0                  0x00             
 * 0x0270[7:0]   DESIGN_ID5                  0                  0x00             
 * 0x0271[7:0]   DESIGN_ID6                  0                  0x00             
 * 0x0272[7:0]   DESIGN_ID7                  0                  0x00             
 * 0x028A[4:0]   OOF0_TRG_THR_EXT            0                  0x00             
 * 0x028B[4:0]   OOF1_TRG_THR_EXT            0                  0x00             
 * 0x028C[4:0]   OOF2_TRG_THR_EXT            0                  0x00             
 * 0x028D[4:0]   OOF3_TRG_THR_EXT            0                  0x00             
 * 0x028E[4:0]   OOF0_CLR_THR_EXT            0                  0x00             
 * 0x028F[4:0]   OOF1_CLR_THR_EXT            0                  0x00             
 * 0x0290[4:0]   OOF2_CLR_THR_EXT            0                  0x00             
 * 0x0291[4:0]   OOF3_CLR_THR_EXT            0                  0x00             
 * 0x0294[3:0]   FASTLOCK_EXTEND_SCL_PLLA    8                  0x8              
 * 0x0294[7:4]   FASTLOCK_EXTEND_SCL_PLLB    8                  0x8              
 * 0x0295[3:0]   FASTLOCK_EXTEND_SCL_PLLC    8                  0x8              
 * 0x0295[7:4]   FASTLOCK_EXTEND_SCL_PLLD    8                  0x8              
 * 0x0296[0]     LOL_SLW_VALWIN_SELX_PLLA    0                  0x0              
 * 0x0296[1]     LOL_SLW_VALWIN_SELX_PLLB    0                  0x0              
 * 0x0296[2]     LOL_SLW_VALWIN_SELX_PLLC    0                  0x0              
 * 0x0296[3]     LOL_SLW_VALWIN_SELX_PLLD    0                  0x0              
 * 0x0297[0]     FASTLOCK_DLY_ONSW_EN_PLLA   0                  0x0              
 * 0x0297[1]     FASTLOCK_DLY_ONSW_EN_PLLB   1                  0x1              
 * 0x0297[2]     FASTLOCK_DLY_ONSW_EN_PLLC   0                  0x0              
 * 0x0297[3]     FASTLOCK_DLY_ONSW_EN_PLLD   0                  0x0              
 * 0x0299[0]     FASTLOCK_DLY_ONLOL_EN_PLLA  0                  0x0              
 * 0x0299[1]     FASTLOCK_DLY_ONLOL_EN_PLLB  1                  0x1              
 * 0x0299[2]     FASTLOCK_DLY_ONLOL_EN_PLLC  0                  0x0              
 * 0x0299[3]     FASTLOCK_DLY_ONLOL_EN_PLLD  0                  0x0              
 * 0x029A[19:0]  FASTLOCK_DLY_ONLOL_PLLA     0                  0x00000          
 * 0x029D[19:0]  FASTLOCK_DLY_ONLOL_PLLB     3829               0x00EF5          
 * 0x02A0[19:0]  FASTLOCK_DLY_ONLOL_PLLC     0                  0x00000          
 * 0x02A3[19:0]  FASTLOCK_DLY_ONLOL_PLLD     0                  0x00000          
 * 0x02A6[19:0]  FASTLOCK_DLY_ONSW_PLLA      0                  0x00000          
 * 0x02A9[19:0]  FASTLOCK_DLY_ONSW_PLLB      9830               0x02666          
 * 0x02AC[19:0]  FASTLOCK_DLY_ONSW_PLLC      0                  0x00000          
 * 0x02AF[19:0]  FASTLOCK_DLY_ONSW_PLLD      0                  0x00000          
 * 0x02B7[1:0]   LOL_NOSIG_TIME_PLLA         3                  0x3              
 * 0x02B7[3:2]   LOL_NOSIG_TIME_PLLB         3                  0x3              
 * 0x02B7[5:4]   LOL_NOSIG_TIME_PLLC         3                  0x3              
 * 0x02B7[7:6]   LOL_NOSIG_TIME_PLLD         3                  0x3              
 * 0x02BC[1:0]   LOS_CMOS_EN                 0                  0x0              
 * 0x02BC[5:4]   LOS_CMOS_EN_1HZ             2                  0x2              
 * 0x02BD[1:0]   LOS_CMOS0_VAL_TIME          0                  0x0              
 * 0x02BD[3:2]   LOS_CMOS1_VAL_TIME          1                  0x1              
 * 0x02BE[15:0]  LOS_CMOS0_TRG_THR           0                  0x0000           
 * 0x02C0[15:0]  LOS_CMOS1_TRG_THR           13835              0x360B           
 * 0x02C2[15:0]  LOS_CMOS0_CLR_THR           0                  0x0000           
 * 0x02C4[15:0]  LOS_CMOS1_CLR_THR           13835              0x360B           
 * 0x0302[43:0]  N0_NUM                      0                  0x00000000000    
 * 0x0308[31:0]  N0_DEN                      0                  0x00000000       
 * 0x030C[0]     N0_UPDATE                   0                  0x0              
 * 0x030D[43:0]  N1_NUM                      0                  0x00000000000    
 * 0x0313[31:0]  N1_DEN                      0                  0x00000000       
 * 0x0317[0]     N1_UPDATE                   0                  0x0              
 * 0x0318[43:0]  N2_NUM                      0                  0x00000000000    
 * 0x031E[31:0]  N2_DEN                      0                  0x00000000       
 * 0x0322[0]     N2_UPDATE                   0                  0x0              
 * 0x0323[43:0]  N3_NUM                      30947672064        0x00734A00000    
 * 0x0329[31:0]  N3_DEN                      2684354560         0xA0000000       
 * 0x032D[0]     N3_UPDATE                   0                  0x0              
 * 0x0338[1]     N_UPDATE                    0                  0x0              
 * 0x033B[43:0]  N0_FSTEPW                   0                  0x00000000000    
 * 0x0341[43:0]  N1_FSTEPW                   0                  0x00000000000    
 * 0x0347[43:0]  N2_FSTEPW                   0                  0x00000000000    
 * 0x034D[43:0]  N3_FSTEPW                   0                  0x00000000000    
 * 0x0408[5:0]   BW0_PLLA                    0                  0x00             
 * 0x0409[5:0]   BW1_PLLA                    0                  0x00             
 * 0x040A[5:0]   BW2_PLLA                    0                  0x00             
 * 0x040B[5:0]   BW3_PLLA                    0                  0x00             
 * 0x040C[5:0]   BW4_PLLA                    0                  0x00             
 * 0x040D[5:0]   BW5_PLLA                    0                  0x00             
 * 0x040E[5:0]   FASTLOCK_BW0_PLLA           0                  0x00             
 * 0x040F[5:0]   FASTLOCK_BW1_PLLA           0                  0x00             
 * 0x0410[5:0]   FASTLOCK_BW2_PLLA           0                  0x00             
 * 0x0411[5:0]   FASTLOCK_BW3_PLLA           0                  0x00             
 * 0x0412[5:0]   FASTLOCK_BW4_PLLA           0                  0x00             
 * 0x0413[5:0]   FASTLOCK_BW5_PLLA           0                  0x00             
 * 0x0415[55:0]  M_NUM_PLLA                  0                  0x00000000000000 
 * 0x041C[31:0]  M_DEN_PLLA                  0                  0x00000000       
 * 0x0421[3:0]   M_FRAC_MODE_PLLA            11                 0xB              
 * 0x0421[4]     M_FRAC_EN_PLLA              0                  0x0              
 * 0x0422[0]     M_FSTEP_MSK_PLLA            1                  0x1              
 * 0x0422[1]     M_FSTEPW_DEN_PLLA           0                  0x0              
 * 0x0423[55:0]  M_FSTEPW_PLLA               0                  0x00000000000000 
 * 0x042A[2:0]   IN_SEL_PLLA                 0                  0x0              
 * 0x042B[0]     FASTLOCK_AUTO_EN_PLLA       1                  0x1              
 * 0x042B[1]     FASTLOCK_MAN_PLLA           0                  0x0              
 * 0x042C[0]     HOLD_EN_PLLA                1                  0x1              
 * 0x042C[3]     HOLD_RAMP_BYP_PLLA          1                  0x1              
 * 0x042C[4]     HOLDEXIT_BW_SEL1_PLLA       0                  0x0              
 * 0x042C[7:5]   RAMP_STEP_INTERVAL_PLLA     0                  0x0              
 * 0x042D[1]     HOLD_RAMPBYP_NOHIST_PLLA    1                  0x1              
 * 0x042E[4:0]   HOLD_HIST_LEN_PLLA          0                  0x00             
 * 0x042F[4:0]   HOLD_HIST_DELAY_PLLA        0                  0x00             
 * 0x0431[4:0]   HOLD_REF_COUNT_FRC_PLLA     0                  0x00             
 * 0x0432[23:0]  HOLD_15M_CYC_COUNT_PLLA     1024               0x000400         
 * 0x0436[1:0]   CLK_SWITCH_MODE_PLLA        2                  0x2              
 * 0x0436[2]     HSW_EN_PLLA                 1                  0x1              
 * 0x0437[3:0]   IN_LOS_MSK_PLLA             0                  0x0              
 * 0x0437[7:4]   IN_OOF_MSK_PLLA             0                  0x0              
 * 0x0438[2:0]   IN0_PRIORITY_PLLA           0                  0x0              
 * 0x0438[6:4]   IN1_PRIORITY_PLLA           0                  0x0              
 * 0x0439[2:0]   IN2_PRIORITY_PLLA           0                  0x0              
 * 0x0439[6:4]   REF_PRIORITY_PLLA           0                  0x0              
 * 0x043D[4:0]   HSW_COARSE_PM_LEN_PLLA      10                 0x0A             
 * 0x043E[4:0]   HSW_COARSE_PM_DLY_PLLA      6                  0x06             
 * 0x0489[12:0]  PFD_EN_DELAY_PLLA           0                  0x0000           
 * 0x049B[1]     INIT_LP_CLOSE_HO_PLLA       0                  0x0              
 * 0x049B[4]     HOLD_PRESERVE_HIST_PLLA     1                  0x1              
 * 0x049B[5]     HOLD_FRZ_WITH_INTONLY_PLLA  0                  0x0              
 * 0x049B[6]     HOLDEXIT_BW_SEL0_PLLA       0                  0x0              
 * 0x049B[7]     HOLDEXIT_STD_BO_PLLA        0                  0x0              
 * 0x049D[5:0]   BW0_HO_PLLA                 0                  0x00             
 * 0x049E[5:0]   BW1_HO_PLLA                 0                  0x00             
 * 0x049F[5:0]   BW2_HO_PLLA                 0                  0x00             
 * 0x04A0[5:0]   BW3_HO_PLLA                 0                  0x00             
 * 0x04A1[5:0]   BW4_HO_PLLA                 0                  0x00             
 * 0x04A2[5:0]   BW5_HO_PLLA                 0                  0x00             
 * 0x04A6[2:0]   RAMP_STEP_SIZE_PLLA         0                  0x0              
 * 0x04A6[3]     RAMP_SWITCH_EN_PLLA         0                  0x0              
 * 0x0508[5:0]   BW0_PLLB                    16                 0x10             
 * 0x0509[5:0]   BW1_PLLB                    31                 0x1F             
 * 0x050A[5:0]   BW2_PLLB                    12                 0x0C             
 * 0x050B[5:0]   BW3_PLLB                    11                 0x0B             
 * 0x050C[5:0]   BW4_PLLB                    63                 0x3F             
 * 0x050D[5:0]   BW5_PLLB                    63                 0x3F             
 * 0x050E[5:0]   FASTLOCK_BW0_PLLB           16                 0x10             
 * 0x050F[5:0]   FASTLOCK_BW1_PLLB           33                 0x21             
 * 0x0510[5:0]   FASTLOCK_BW2_PLLB           12                 0x0C             
 * 0x0511[5:0]   FASTLOCK_BW3_PLLB           11                 0x0B             
 * 0x0512[5:0]   FASTLOCK_BW4_PLLB           63                 0x3F             
 * 0x0513[5:0]   FASTLOCK_BW5_PLLB           63                 0x3F             
 * 0x0515[55:0]  M_NUM_PLLB                  5941953036288      0x00056778000000 
 * 0x051C[31:0]  M_DEN_PLLB                  4194304000         0xFA000000       
 * 0x0521[3:0]   M_FRAC_MODE_PLLB            11                 0xB              
 * 0x0521[4]     M_FRAC_EN_PLLB              1                  0x1              
 * 0x053A[1:0]   HSW_MODE_PLLB               2                  0x2              
 * 0x053A[3:2]   HSW_PHMEAS_CTRL_PLLB        0                  0x0              
 * 0x053B[9:0]   HSW_PHMEAS_THR_PLLB         3                  0x003            
 * 0x053D[4:0]   HSW_COARSE_PM_LEN_PLLB      17                 0x11             
 * 0x053E[4:0]   HSW_COARSE_PM_DLY_PLLB      6                  0x06             
 * 0x0589[12:0]  PFD_EN_DELAY_PLLB           13                 0x000D           
 * 0x059B[1]     INIT_LP_CLOSE_HO_PLLB       0                  0x0              
 * 0x059B[4]     HOLD_PRESERVE_HIST_PLLB     1                  0x1              
 * 0x059B[5]     HOLD_FRZ_WITH_INTONLY_PLLB  0                  0x0              
 * 0x059B[6]     HOLDEXIT_BW_SEL0_PLLB       0                  0x0              
 * 0x059B[7]     HOLDEXIT_STD_BO_PLLB        1                  0x1              
 * 0x059D[5:0]   HOLDEXIT_BW0_PLLB           16                 0x10             
 * 0x059E[5:0]   HOLDEXIT_BW1_PLLB           33                 0x21             
 * 0x059F[5:0]   HOLDEXIT_BW2_PLLB           12                 0x0C             
 * 0x05A0[5:0]   HOLDEXIT_BW3_PLLB           11                 0x0B             
 * 0x05A1[5:0]   HOLDEXIT_BW4_PLLB           63                 0x3F             
 * 0x05A2[5:0]   HOLDEXIT_BW5_PLLB           63                 0x3F             
 * 0x05A6[2:0]   RAMP_STEP_SIZE_PLLB         0                  0x0              
 * 0x05A6[3]     RAMP_SWITCH_EN_PLLB         0                  0x0              
 * 0x0602[4]     ADD_DIV256_PLLC             0                  0x0              
 * 0x0608[5:0]   BW0_PLLC                    0                  0x00             
 * 0x0609[5:0]   BW1_PLLC                    0                  0x00             
 * 0x060A[5:0]   BW2_PLLC                    0                  0x00             
 * 0x060B[5:0]   BW3_PLLC                    0                  0x00             
 * 0x060C[5:0]   BW4_PLLC                    0                  0x00             
 * 0x060D[5:0]   BW5_PLLC                    0                  0x00             
 * 0x060E[5:0]   FASTLOCK_BW0_PLLC           0                  0x00             
 * 0x060F[5:0]   FASTLOCK_BW1_PLLC           0                  0x00             
 * 0x0610[5:0]   FASTLOCK_BW2_PLLC           0                  0x00             
 * 0x0611[5:0]   FASTLOCK_BW3_PLLC           0                  0x00             
 * 0x0612[5:0]   FASTLOCK_BW4_PLLC           0                  0x00             
 * 0x0613[5:0]   FASTLOCK_BW5_PLLC           0                  0x00             
 * 0x0615[55:0]  M_NUM_PLLC                  0                  0x00000000000000 
 * 0x061C[31:0]  M_DEN_PLLC                  0                  0x00000000       
 * 0x0621[3:0]   M_FRAC_MODE_PLLC            11                 0xB              
 * 0x0621[4]     M_FRAC_EN_PLLC              0                  0x0              
 * 0x0622[0]     M_FSTEP_MSK_PLLC            1                  0x1              
 * 0x0622[1]     M_FSTEPW_DEN_PLLC           0                  0x0              
 * 0x0623[55:0]  M_FSTEPW_PLLC               0                  0x00000000000000 
 * 0x062A[2:0]   IN_SEL_PLLC                 0                  0x0              
 * 0x062B[0]     FASTLOCK_AUTO_EN_PLLC       1                  0x1              
 * 0x062B[1]     FASTLOCK_MAN_PLLC           0                  0x0              
 * 0x062C[0]     HOLD_EN_PLLC                1                  0x1              
 * 0x062C[3]     HOLD_RAMP_BYP_PLLC          1                  0x1              
 * 0x062C[4]     HOLDEXIT_BW_SEL1_PLLC       0                  0x0              
 * 0x062C[7:5]   RAMP_STEP_INTERVAL_PLLC     0                  0x0              
 * 0x062D[1]     HOLD_RAMPBYP_NOHIST_PLLC    1                  0x1              
 * 0x062E[4:0]   HOLD_HIST_LEN_PLLC          0                  0x00             
 * 0x062F[4:0]   HOLD_HIST_DELAY_PLLC        0                  0x00             
 * 0x0631[4:0]   HOLD_REF_COUNT_FRC_PLLC     0                  0x00             
 * 0x0632[23:0]  HOLD_15M_CYC_COUNT_PLLC     1024               0x000400         
 * 0x0636[1:0]   CLK_SWITCH_MODE_PLLC        2                  0x2              
 * 0x0636[2]     HSW_EN_PLLC                 1                  0x1              
 * 0x0637[3:0]   IN_LOS_MSK_PLLC             0                  0x0              
 * 0x0637[7:4]   IN_OOF_MSK_PLLC             0                  0x0              
 * 0x0638[2:0]   IN0_PRIORITY_PLLC           0                  0x0              
 * 0x0638[6:4]   IN1_PRIORITY_PLLC           0                  0x0              
 * 0x0639[2:0]   IN2_PRIORITY_PLLC           0                  0x0              
 * 0x0639[6:4]   REF_PRIORITY_PLLC           0                  0x0              
 * 0x063D[4:0]   HSW_COARSE_PM_LEN_PLLC      10                 0x0A             
 * 0x063E[4:0]   HSW_COARSE_PM_DLY_PLLC      6                  0x06             
 * 0x0689[12:0]  PFD_EN_DELAY_PLLC           12                 0x000C           
 * 0x069B[1]     INIT_LP_CLOSE_HO_PLLC       0                  0x0              
 * 0x069B[4]     HOLD_PRESERVE_HIST_PLLC     1                  0x1              
 * 0x069B[5]     HOLD_FRZ_WITH_INTONLY_PLLC  0                  0x0              
 * 0x069B[6]     HOLDEXIT_BW_SEL0_PLLC       0                  0x0              
 * 0x069B[7]     HOLDEXIT_STD_BO_PLLC        0                  0x0              
 * 0x069D[5:0]   HOLDEXIT_BW0_PLLC           0                  0x00             
 * 0x069E[5:0]   HOLDEXIT_BW1_PLLC           0                  0x00             
 * 0x069F[5:0]   HOLDEXIT_BW2_PLLC           0                  0x00             
 * 0x06A0[5:0]   HOLDEXIT_BW3_PLLC           0                  0x00             
 * 0x06A1[5:0]   HOLDEXIT_BW4_PLLC           0                  0x00             
 * 0x06A2[5:0]   HOLDEXIT_BW5_PLLC           0                  0x00             
 * 0x06A6[2:0]   RAMP_STEP_SIZE_PLLC         0                  0x0              
 * 0x06A6[3]     RAMP_SWITCH_EN_PLLC         0                  0x0              
 * 0x0702[4]     ADD_DIV256_PLLD             1                  0x1              
 * 0x0709[5:0]   BW0_PLLD                    0                  0x00             
 * 0x070A[5:0]   BW1_PLLD                    0                  0x00             
 * 0x070B[5:0]   BW2_PLLD                    0                  0x00             
 * 0x070C[5:0]   BW3_PLLD                    0                  0x00             
 * 0x070D[5:0]   BW4_PLLD                    0                  0x00             
 * 0x070E[5:0]   BW5_PLLD                    0                  0x00             
 * 0x070F[5:0]   FASTLOCK_BW0_PLLD           0                  0x00             
 * 0x0710[5:0]   FASTLOCK_BW1_PLLD           0                  0x00             
 * 0x0711[5:0]   FASTLOCK_BW2_PLLD           0                  0x00             
 * 0x0712[5:0]   FASTLOCK_BW3_PLLD           0                  0x00             
 * 0x0713[5:0]   FASTLOCK_BW4_PLLD           0                  0x00             
 * 0x0714[5:0]   FASTLOCK_BW5_PLLD           0                  0x00             
 * 0x0716[55:0]  M_NUM_PLLD                  10307921510400000  0x249F0000000000 
 * 0x071D[31:0]  M_DEN_PLLD                  2147483648         0x80000000       
 * 0x0722[3:0]   M_FRAC_MODE_PLLD            11                 0xB              
 * 0x0722[4]     M_FRAC_EN_PLLD              1                  0x1              
 * 0x0723[0]     M_FSTEP_MSK_PLLD            1                  0x1              
 * 0x0723[1]     M_FSTEPW_DEN_PLLD           0                  0x0              
 * 0x0724[55:0]  M_FSTEPW_PLLD               0                  0x00000000000000 
 * 0x072B[2:0]   IN_SEL_PLLD                 5                  0x5              
 * 0x072C[0]     FASTLOCK_AUTO_EN_PLLD       0                  0x0              
 * 0x072C[1]     FASTLOCK_MAN_PLLD           0                  0x0              
 * 0x072D[0]     HOLD_EN_PLLD                1                  0x1              
 * 0x072D[3]     HOLD_RAMP_BYP_PLLD          1                  0x1              
 * 0x072D[4]     HOLDEXIT_BW_SEL1_PLLD       0                  0x0              
 * 0x072D[7:5]   RAMP_STEP_INTERVAL_PLLD     0                  0x0              
 * 0x072E[1]     HOLD_RAMPBYP_NOHIST_PLLD    1                  0x1              
 * 0x072F[4:0]   HOLD_HIST_LEN_PLLD          0                  0x00             
 * 0x0730[4:0]   HOLD_HIST_DELAY_PLLD        0                  0x00             
 * 0x0732[4:0]   HOLD_REF_COUNT_FRC_PLLD     0                  0x00             
 * 0x0733[23:0]  HOLD_15M_CYC_COUNT_PLLD     1024               0x000400         
 * 0x0736[0]     FORCE_HOLD_PLLD             0                  0x0              
 * 0x0737[1:0]   CLK_SWITCH_MODE_PLLD        0                  0x0              
 * 0x0737[2]     HSW_EN_PLLD                 0                  0x0              
 * 0x0738[3:0]   IN_LOS_MSK_PLLD             0                  0x0              
 * 0x0738[7:4]   IN_OOF_MSK_PLLD             0                  0x0              
 * 0x0739[2:0]   IN0_PRIORITY_PLLD           0                  0x0              
 * 0x0739[6:4]   IN1_PRIORITY_PLLD           0                  0x0              
 * 0x073A[2:0]   IN2_PRIORITY_PLLD           0                  0x0              
 * 0x073A[6:4]   REF_PRIORITY_PLLD           0                  0x0              
 * 0x073E[4:0]   HSW_COARSE_PM_LEN_PLLD      10                 0x0A             
 * 0x073F[4:0]   HSW_COARSE_PM_DLY_PLLD      6                  0x06             
 * 0x0789[12:0]  PFD_EN_DELAY_PLLD           12                 0x000C           
 * 0x079B[1]     INIT_LP_CLOSE_HO_PLLD       0                  0x0              
 * 0x079B[4]     HOLD_PRESERVE_HIST_PLLD     1                  0x1              
 * 0x079B[5]     HOLD_FRZ_WITH_INTONLY_PLLD  0                  0x0              
 * 0x079B[6]     HOLDEXIT_BW_SEL0_PLLD       0                  0x0              
 * 0x079B[7]     HOLDEXIT_STD_BO_PLLD        0                  0x0              
 * 0x079C[1]     FREERUN_FORCE_PLLD          1                  0x1              
 * 0x079D[5:0]   HOLDEXIT_BW0_PLLD           0                  0x00             
 * 0x079E[5:0]   HOLDEXIT_BW1_PLLD           0                  0x00             
 * 0x079F[5:0]   HOLDEXIT_BW2_PLLD           0                  0x00             
 * 0x07A0[5:0]   HOLDEXIT_BW3_PLLD           0                  0x00             
 * 0x07A1[5:0]   HOLDEXIT_BW4_PLLD           0                  0x00             
 * 0x07A2[5:0]   HOLDEXIT_BW5_PLLD           0                  0x00             
 * 0x07A6[2:0]   RAMP_STEP_SIZE_PLLD         0                  0x0              
 * 0x07A6[3]     RAMP_SWITCH_EN_PLLD         0                  0x0              
 * 0x07AA[0]     CONFIG3_CMOS_PLLD           1                  0x1              
 * 0x07AA[1]     CONFIG2_CMOS_PLLD           1                  0x1              
 * 0x07AA[2]     CONFIG1_CMOS_PLLD           0                  0x0              
 * 0x07AA[5:4]   CONFIG0_CMOS_PLLD           0                  0x0              
 * 0x0943[0]     IO_VDD_SEL                  1                  0x1              
 * 0x0949[3:0]   IN_EN                       8                  0x8              
 * 0x0949[7:4]   IN_PULSED_CMOS_EN           0                  0x0              
 * 0x094A[3:0]   INX_TO_PFD_EN               8                  0x8              
 * 0x094E[11:0]  REFCLK_HYS_SEL              585                0x249            
 * 0x095E[0]     MXAXB_INTEGER               0                  0x0              
 * 0x0A03[4:0]   N_CLK_TO_OUTX_EN            8                  0x08             
 * 0x0A04[4:0]   N_PIBYP                     0                  0x00             
 * 0x0A05[4:0]   N_PDNB                      8                  0x08             
 * 0x0B2E[6:0]   GLOBAL_OD_TIMEOUT           24                 0x18             
 * 0x0B44[3:0]   PDIV_FRACN_CLK_DIS          15                 0xF              
 * 0x0B44[4]     FRACN_CLK_DIS_PLLA          0                  0x0              
 * 0x0B44[5]     FRACN_CLK_DIS_PLLB          0                  0x0              
 * 0x0B44[6]     FRACN_CLK_DIS_PLLC          0                  0x0              
 * 0x0B44[7]     FRACN_CLK_DIS_PLLD          0                  0x0              
 * 0x0B45[0]     CLK_DIS_PLLA                1                  0x1              
 * 0x0B45[1]     CLK_DIS_PLLB                0                  0x0              
 * 0x0B45[2]     CLK_DIS_PLLC                1                  0x1              
 * 0x0B45[3]     CLK_DIS_PLLD                0                  0x0              
 * 0x0B46[3:0]   LOS_CLK_DIS                 0                  0x0              
 * 0x0B46[5:4]   LOS_CMOS_CLK_DIS_PLLD       0                  0x0              
 * 0x0B47[4:0]   OOF_CLK_DIS                 7                  0x07             
 * 0x0B48[4:0]   OOF_DIV_CLK_DIS             7                  0x07             
 * 0x0B4A[4:0]   N_CLK_DIS                   7                  0x07             
 * 0x0B57[11:0]  VCO_RESET_CALCODE           270                0x10E            
 * 0x0D11[24:0]  PFD_TRIM_PLLA               14                 0x000000E        
 * 0x0D15[24:0]  PFD_TRIM_PLLB               14                 0x000000E        
 * 0x0D19[24:0]  PFD_TRIM_PLLC               14                 0x000000E        
 * 0x0D1D[24:0]  PFD_TRIM_PLLD               28333440           0x1B05580        
 * 0x5308[7:0]   USER_SCRATCH0               0                  0x00             
 * 0x5309[7:0]   USER_SCRATCH1               0                  0x00             
 * 0x530A[7:0]   USER_SCRATCH2               0                  0x00             
 * 0x530B[7:0]   USER_SCRATCH3               0                  0x00             
 * 0x530C[7:0]   USER_SCRATCH4               0                  0x00             
 * 0x530D[7:0]   USER_SCRATCH5               0                  0x00             
 * 0x530E[7:0]   USER_SCRATCH6               0                  0x00             
 * 0x530F[7:0]   USER_SCRATCH7               0                  0x00             
 * 0x5320[6]     INIT_LCKB_DIS               0                  0x0              
 * 0x5320[4]     INIT_ACQ_TYPE               0                  0x0              
 * 0x5320[0]     PPS_EN                      1                  0x1              
 * 0x5330[3]     LOS_5380_EN                 1                  0x1              
 * 0x5330[2]     LOS_INT_EN                  0                  0x0              
 * 0x5330[1]     LOS_EXT_EN                  0                  0x0              
 * 0x5330[0]     LOS_EXT                     0                  0x0              
 * 0x5331[7:0]   LOS_TRG_CNT                 0                  0x00             
 * 0x5332[7:0]   LOS_CLR_CNT                 0                  0x00             
 * 0x5340[5:4]   LOL_ACQ_TYPE                0                  0x0              
 * 0x5341[7:0]   LOT_HO_CNT                  15                 0x0F             
 * 0x5342[15:0]  LOL_TRG_CNT                 2                  0x0002           
 * 0x5344[15:0]  LOL_CLR_CNT                 0                  0x0000           
 * 0x5348[29:0]  LOL_TRG_THR                 56667              0x0000DD5B       
 * 0x534C[29:0]  LOL_CLR_THR                 57                 0x00000039       
 * 0x5350[30:0]  DCO_FSTEPW                  6338               0x000018C2       
 * 0x5358[2:0]   DCO_SCALE                   0                  0x0              
 * 0x535C[31:0]  PP_CW_LMT                   1980651012         0x760E5604       
 * 0x5360[31:0]  PD_ADJ                      9473533            0x00908DFD       
 * 0x5364[31:0]  PD_CW_2_ADJ                 3210               0x00000C8A       
 * 0x5368[31:0]  SL_PER_2_ADJ                183251938          0x0AEC33E2       
 * 0x536C[31:0]  SL_PE_2_ADJ                 178957             0x0002BB0D       
 * 0x5371[7:0]   SLA_FA_CNT                  0                  0x00             
 * 0x5372[2:0]   SLA_FP_NCYC                 0                  0x0              
 * 0x5373[7:0]   SLA_FP_VAL_CNT              0                  0x00             
 * 0x5374[30:0]  SLA_FE_THR                  2147483647         0x7FFFFFFF       
 * 0x5378[4:0]   SLA_PP1_NCYC                4                  0x04             
 * 0x5379[4:0]   SLA_PP2_NCYC                0                  0x00             
 * 0x537A[4:0]   SLA_PP3_NCYC                0                  0x00             
 * 0x537B[4:0]   SLA_PP4_NCYC                0                  0x00             
 * 0x537C[4:0]   SLA_PP5_NCYC                0                  0x00             
 * 0x537D[4:0]   SLA_PP6_NCYC                0                  0x00             
 * 0x537E[4:0]   SLA_PP7_NCYC                0                  0x00             
 * 0x537F[4:0]   SLA_PP8_NCYC                0                  0x00             
 * 0x5380[29:0]  SLA_PE_THR                  1073741823         0x3FFFFFFF       
 * 0x5384[3:0]   SLA_RL1_NF                  12                 0xC              
 * 0x5385[4:0]   SLA_RL1_NI                  19                 0x13             
 * 0x5386[15:0]  SLA_RL1_CNT                 64                 0x0040           
 * 0x5388[3:0]   SLA_RL2_NF                  11                 0xB              
 * 0x5389[4:0]   SLA_RL2_NI                  17                 0x11             
 * 0x538A[15:0]  SLA_RL2_CNT                 53                 0x0035           
 * 0x538C[3:0]   SLA_RL3_NF                  10                 0xA              
 * 0x538D[4:0]   SLA_RL3_NI                  15                 0x0F             
 * 0x538E[15:0]  SLA_RL3_CNT                 114                0x0072           
 * 0x5390[3:0]   SLA_RL4_NF                  10                 0xA              
 * 0x5391[4:0]   SLA_RL4_NI                  15                 0x0F             
 * 0x5392[15:0]  SLA_RL4_CNT                 0                  0x0000           
 * 0x53A1[7:0]   SLB_FA_CNT                  0                  0x00             
 * 0x53A2[2:0]   SLB_FP_NCYC                 0                  0x0              
 * 0x53A3[7:0]   SLB_FP_VAL_CNT              0                  0x00             
 * 0x53A4[30:0]  SLB_FE_THR                  0                  0x00000000       
 * 0x53A8[4:0]   SLB_PP1_NCYC                0                  0x00             
 * 0x53A9[4:0]   SLB_PP2_NCYC                0                  0x00             
 * 0x53AA[4:0]   SLB_PP3_NCYC                0                  0x00             
 * 0x53AB[4:0]   SLB_PP4_NCYC                0                  0x00             
 * 0x53AC[4:0]   SLB_PP5_NCYC                0                  0x00             
 * 0x53AD[4:0]   SLB_PP6_NCYC                0                  0x00             
 * 0x53AE[4:0]   SLB_PP7_NCYC                0                  0x00             
 * 0x53AF[4:0]   SLB_PP8_NCYC                0                  0x00             
 * 0x53B0[29:0]  SLB_PE_THR                  0                  0x00000000       
 * 0x53B4[3:0]   SLB_RL1_NF                  0                  0x0              
 * 0x53B5[4:0]   SLB_RL1_NI                  0                  0x00             
 * 0x53B6[15:0]  SLB_RL1_CNT                 0                  0x0000           
 * 0x53B8[3:0]   SLB_RL2_NF                  0                  0x0              
 * 0x53B9[4:0]   SLB_RL2_NI                  0                  0x00             
 * 0x53BA[15:0]  SLB_RL2_CNT                 0                  0x0000           
 * 0x53BC[3:0]   SLB_RL3_NF                  0                  0x0              
 * 0x53BD[4:0]   SLB_RL3_NI                  0                  0x00             
 * 0x53BE[15:0]  SLB_RL3_CNT                 0                  0x0000           
 * 0x53C0[3:0]   SLB_RL4_NF                  0                  0x0              
 * 0x53C1[4:0]   SLB_RL4_NI                  0                  0x00             
 * 0x53C2[15:0]  SLB_RL4_CNT                 0                  0x0000           
 * 0x53D1[3:0]   NL_NF                       6                  0x6              
 * 0x53D2[4:0]   NL_NI                       1                  0x01             
 * 0x53E0[5:4]   HO_ACQ_TYPE                 0                  0x0              
 * 0x53E0[1]     FORCE_HOLD                  0                  0x0              
 * 0x53E0[0]     HO_EXIT_EN                  1                  0x1              
 * 0x53E1[2:0]   HOLD_HIST_LEN               4                  0x4              
 * 0x53E2[4:0]   HOLD_HIST_DELAY             16                 0x10
 * 
 *
 */

#endif