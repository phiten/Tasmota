/********************************************************************
 * Tasmota lib
 * 
 * To use: `import power`
 * 
 * read power values
 *******************************************************************/
#include "be_constobj.h"

// Tasmota specific

extern int gp_pin_mode(bvm *vm);
extern int gp_digital_write(bvm *vm);
extern int gp_digital_read(bvm *vm);

extern int gp_pin_used(bvm *vm);
extern int gp_pin(bvm *vm);

#if !BE_USE_PRECOMPILED_OBJECT
be_native_module_attr_table(gpio) {
    // HIGH/LOW
    be_native_module_int("LOW", 0),
    be_native_module_int("HIGH", 1),
    // GPIO states
    be_native_module_int("INPUT", 1),
    be_native_module_int("OUTPUT", 2),
    be_native_module_int("PULLUP", 4),
    be_native_module_int("INPUT_PULLUP", 5),
    be_native_module_int("PULLDOWN", 8),
    be_native_module_int("INPUT_PULLDOWN", 9),
    be_native_module_int("OPEN_DRAIN", 16),
    be_native_module_int("OUTPUT_OPEN_DRAIN", 18),
    // Interrupt trigger
    be_native_module_int("RISING", 1),
    be_native_module_int("FALLING", 2),
    be_native_module_int("CHANGE", 4),
    // Tasmota GPIOs
    be_native_module_int("NONE", 0),
    be_native_module_int("KEY1", 1),
    be_native_module_int("KEY1_NP", 2),
    be_native_module_int("KEY1_INV", 3),
    be_native_module_int("KEY1_INV_NP", 4),
    be_native_module_int("SWT1", 5),
    be_native_module_int("SWT1_NP", 6),
    be_native_module_int("REL1", 7),
    be_native_module_int("REL1_INV", 8),
    be_native_module_int("LED1", 9),
    be_native_module_int("LED1_INV", 10),
    be_native_module_int("CNTR1", 11),
    be_native_module_int("CNTR1_NP", 12),
    be_native_module_int("PWM1", 13),
    be_native_module_int("PWM1_INV", 14),
    be_native_module_int("BUZZER", 15),
    be_native_module_int("BUZZER_INV", 16),
    be_native_module_int("LEDLNK", 17),
    be_native_module_int("LEDLNK_INV", 18),
    be_native_module_int("I2C_SCL", 19),
    be_native_module_int("I2C_SDA", 20),
    be_native_module_int("SPI_MISO", 21),
    be_native_module_int("SPI_MOSI", 22),
    be_native_module_int("SPI_CLK", 23),
    be_native_module_int("SPI_CS", 24),
    be_native_module_int("SPI_DC", 25),
    be_native_module_int("SSPI_MISO", 26),
    be_native_module_int("SSPI_MOSI", 27),
    be_native_module_int("SSPI_SCLK", 28),
    be_native_module_int("SSPI_CS", 29),
    be_native_module_int("SSPI_DC", 30),
    be_native_module_int("BACKLIGHT", 31),
    be_native_module_int("OLED_RESET", 32),
    be_native_module_int("IRSEND", 33),
    be_native_module_int("IRRECV", 34),
    be_native_module_int("RFSEND", 35),
    be_native_module_int("RFRECV", 36),
    be_native_module_int("DHT11", 37),
    be_native_module_int("DHT22", 38),
    be_native_module_int("SI7021", 39),
    be_native_module_int("DHT11_OUT", 40),
    be_native_module_int("DSB", 41),
    be_native_module_int("DSB_OUT", 42),
    be_native_module_int("WS2812", 43),
    be_native_module_int("MHZ_TXD", 44),
    be_native_module_int("MHZ_RXD", 45),
    be_native_module_int("PZEM0XX_TX", 46),
    be_native_module_int("PZEM004_RX", 47),
    be_native_module_int("PZEM016_RX", 48),
    be_native_module_int("PZEM017_RX", 49),
    be_native_module_int("SAIR_TX", 50),
    be_native_module_int("SAIR_RX", 51),
    be_native_module_int("PMS5003_TX", 52),
    be_native_module_int("PMS5003_RX", 53),
    be_native_module_int("SDS0X1_TX", 54),
    be_native_module_int("SDS0X1_RX", 55),
    be_native_module_int("SBR_TX", 56),
    be_native_module_int("SBR_RX", 57),
    be_native_module_int("SR04_TRIG", 58),
    be_native_module_int("SR04_ECHO", 59),
    be_native_module_int("SDM120_TX", 60),
    be_native_module_int("SDM120_RX", 61),
    be_native_module_int("SDM630_TX", 62),
    be_native_module_int("SDM630_RX", 63),
    be_native_module_int("TM1638CLK", 64),
    be_native_module_int("TM1638DIO", 65),
    be_native_module_int("TM1638STB", 66),
    be_native_module_int("MP3_DFR562", 67),
    be_native_module_int("HX711_SCK", 68),
    be_native_module_int("HX711_DAT", 69),
    be_native_module_int("TX2X_TXD_BLACK", 70),
    be_native_module_int("TUYA_TX", 71),
    be_native_module_int("TUYA_RX", 72),
    be_native_module_int("MGC3130_XFER", 73),
    be_native_module_int("MGC3130_RESET", 74),
    be_native_module_int("RF_SENSOR", 75),
    be_native_module_int("AZ_TXD", 76),
    be_native_module_int("AZ_RXD", 77),
    be_native_module_int("MAX31855CS", 78),
    be_native_module_int("MAX31855CLK", 79),
    be_native_module_int("MAX31855DO", 80),
    be_native_module_int("NRG_SEL", 81),
    be_native_module_int("NRG_SEL_INV", 82),
    be_native_module_int("NRG_CF1", 83),
    be_native_module_int("HLW_CF", 84),
    be_native_module_int("HJL_CF", 85),
    be_native_module_int("MCP39F5_TX", 86),
    be_native_module_int("MCP39F5_RX", 87),
    be_native_module_int("MCP39F5_RST", 88),
    be_native_module_int("PN532_TXD", 89),
    be_native_module_int("PN532_RXD", 90),
    be_native_module_int("SM16716_CLK", 91),
    be_native_module_int("SM16716_DAT", 92),
    be_native_module_int("SM16716_SEL", 93),
    be_native_module_int("DI", 94),
    be_native_module_int("DCKI", 95),
    be_native_module_int("CSE7766_TX", 96),
    be_native_module_int("CSE7766_RX", 97),
    be_native_module_int("ARIRFRCV", 98),
    be_native_module_int("ARIRFSEL", 99),
    be_native_module_int("TXD", 100),
    be_native_module_int("RXD", 101),
    be_native_module_int("ROT1A", 102),
    be_native_module_int("ROT1B", 103),
    be_native_module_int("ADC_JOY", 104),
    be_native_module_int("SSPI_MAX31865_CS1", 105),
    be_native_module_int("HRE_CLOCK", 106),
    be_native_module_int("HRE_DATA", 107),
    be_native_module_int("ADE7953_IRQ", 108),
    be_native_module_int("SOLAXX1_TX", 109),
    be_native_module_int("SOLAXX1_RX", 110),
    be_native_module_int("ZIGBEE_TX", 111),
    be_native_module_int("ZIGBEE_RX", 112),
    be_native_module_int("RDM6300_RX", 113),
    be_native_module_int("IBEACON_TX", 114),
    be_native_module_int("IBEACON_RX", 115),
    be_native_module_int("A4988_DIR", 116),
    be_native_module_int("A4988_STP", 117),
    be_native_module_int("A4988_ENA", 118),
    be_native_module_int("A4988_MS1", 119),
    be_native_module_int("OUTPUT_HI", 120),
    be_native_module_int("OUTPUT_LO", 121),
    be_native_module_int("DDS2382_TX", 122),
    be_native_module_int("DDS2382_RX", 123),
    be_native_module_int("DDSU666_TX", 124),
    be_native_module_int("DDSU666_RX", 125),
    be_native_module_int("SM2135_CLK", 126),
    be_native_module_int("SM2135_DAT", 127),
    be_native_module_int("DEEPSLEEP", 128),
    be_native_module_int("EXS_ENABLE", 129),
    be_native_module_int("TASMOTACLIENT_TXD", 130),
    be_native_module_int("TASMOTACLIENT_RXD", 131),
    be_native_module_int("TASMOTACLIENT_RST", 132),
    be_native_module_int("TASMOTACLIENT_RST_INV", 133),
    be_native_module_int("HPMA_RX", 134),
    be_native_module_int("HPMA_TX", 135),
    be_native_module_int("GPS_RX", 136),
    be_native_module_int("GPS_TX", 137),
    be_native_module_int("HM10_RX", 138),
    be_native_module_int("HM10_TX", 139),
    be_native_module_int("LE01MR_RX", 140),
    be_native_module_int("LE01MR_TX", 141),
    be_native_module_int("CC1101_GDO0", 142),
    be_native_module_int("CC1101_GDO2", 143),
    be_native_module_int("HRXL_RX", 144),
    be_native_module_int("ELECTRIQ_MOODL_TX", 145),
    be_native_module_int("AS3935", 146),
    be_native_module_int("ADC_INPUT", 147),
    be_native_module_int("ADC_TEMP", 148),
    be_native_module_int("ADC_LIGHT", 149),
    be_native_module_int("ADC_BUTTON", 150),
    be_native_module_int("ADC_BUTTON_INV", 151),
    be_native_module_int("ADC_RANGE", 152),
    be_native_module_int("ADC_CT_POWER", 153),
    be_native_module_int("WEBCAM_PWDN", 154),
    be_native_module_int("WEBCAM_RESET", 155),
    be_native_module_int("WEBCAM_XCLK", 156),
    be_native_module_int("WEBCAM_SIOD", 157),
    be_native_module_int("WEBCAM_SIOC", 158),
    be_native_module_int("WEBCAM_DATA", 159),
    be_native_module_int("WEBCAM_VSYNC", 160),
    be_native_module_int("WEBCAM_HREF", 161),
    be_native_module_int("WEBCAM_PCLK", 162),
    be_native_module_int("WEBCAM_PSCLK", 163),
    be_native_module_int("WEBCAM_HSD", 164),
    be_native_module_int("WEBCAM_PSRCS", 165),
    be_native_module_int("BOILER_OT_RX", 166),
    be_native_module_int("BOILER_OT_TX", 167),
    be_native_module_int("WINDMETER_SPEED", 168),
    be_native_module_int("KEY1_TC", 169),
    be_native_module_int("BL0940_RX", 170),
    be_native_module_int("TCP_TX", 171),
    be_native_module_int("TCP_RX", 172),
    be_native_module_int("ETH_PHY_POWER", 173),
    be_native_module_int("ETH_PHY_MDC", 174),
    be_native_module_int("ETH_PHY_MDIO", 175),
    be_native_module_int("TELEINFO_RX", 176),
    be_native_module_int("TELEINFO_ENABLE", 177),
    be_native_module_int("LMT01", 178),
    be_native_module_int("IEM3000_TX", 179),
    be_native_module_int("IEM3000_RX", 180),
    be_native_module_int("ZIGBEE_RST", 181),
    be_native_module_int("DYP_RX", 182),
    be_native_module_int("MIEL_HVAC_TX", 183),
    be_native_module_int("MIEL_HVAC_RX", 184),
    be_native_module_int("WE517_TX", 185),
    be_native_module_int("WE517_RX", 186),
    be_native_module_int("AS608_TX", 187),
    be_native_module_int("AS608_RX", 188),
    be_native_module_int("SHELLY_DIMMER_BOOT0", 189),
    be_native_module_int("SHELLY_DIMMER_RST_INV", 190),
    be_native_module_int("RC522_RST", 191),
    be_native_module_int("P9813_CLK", 192),
    be_native_module_int("P9813_DAT", 193),
    be_native_module_int("OPTION_A", 194),
    be_native_module_int("FTC532", 195),
    be_native_module_int("RC522_CS", 196),
    be_native_module_int("NRF24_CS", 197),
    be_native_module_int("NRF24_DC", 198),
    be_native_module_int("ILI9341_CS", 199),
    be_native_module_int("ILI9341_DC", 200),
    be_native_module_int("ILI9488_CS", 201),
    be_native_module_int("EPAPER29_CS", 202),
    be_native_module_int("EPAPER42_CS", 203),
    be_native_module_int("SSD1351_CS", 204),
    be_native_module_int("RA8876_CS", 205),
    be_native_module_int("ST7789_CS", 206),
    be_native_module_int("ST7789_DC", 207),
    be_native_module_int("SSD1331_CS", 208),
    be_native_module_int("SSD1331_DC", 209),
    be_native_module_int("SDCARD_CS", 210),
    be_native_module_int("ROT1A_NP", 211),
    be_native_module_int("ROT1B_NP", 212),
    be_native_module_int("ADC_PH", 213),
    be_native_module_int("BS814_CLK", 214),
    be_native_module_int("BS814_DAT", 215),
    be_native_module_int("WIEGAND_D0", 216),
    be_native_module_int("WIEGAND_D1", 217),
    be_native_module_int("NEOPOOL_TX", 218),
    be_native_module_int("NEOPOOL_RX", 219),
    be_native_module_int("SDM72_TX", 220),
    be_native_module_int("SDM72_RX", 221),
    be_native_module_int("TM1637CLK", 222),
    be_native_module_int("TM1637DIO", 223),
    be_native_module_int("PROJECTOR_CTRL_TX", 224),
    be_native_module_int("PROJECTOR_CTRL_RX", 225),
    be_native_module_int("SSD1351_DC", 226),
    be_native_module_int("XPT2046_CS", 227),
    be_native_module_int("CSE7761_TX", 228),
    be_native_module_int("CSE7761_RX", 229),
    be_native_module_int("VL53L0X_XSHUT1", 230),
    be_native_module_int("MAX7219CLK", 231),
    be_native_module_int("MAX7219DIN", 232),
    be_native_module_int("MAX7219CS", 233),
    be_native_module_int("TFMINIPLUS_TX", 234),
    be_native_module_int("TFMINIPLUS_RX", 235),
    be_native_module_int("ZEROCROSS", 236),
    be_native_module_int("HALLEFFECT", 237),
    be_native_module_int("EPD_DATA", 238),
    be_native_module_int("INPUT", 239),
    be_native_module_int("KEY1_PD", 240),
    be_native_module_int("KEY1_INV_PD", 241),
    be_native_module_int("SWT1_PD", 242),
    be_native_module_int("I2S_OUT_DATA", 243),
    be_native_module_int("I2S_OUT_CLK", 244),
    be_native_module_int("I2S_OUT_SLCT", 245),
    be_native_module_int("I2S_IN_DATA", 246),
    be_native_module_int("I2S_IN_CLK", 247),
    be_native_module_int("I2S_IN_SLCT", 248),
    be_native_module_int("INTERRUPT", 249),

    be_native_module_int("SENSOR_END", 250),

    be_native_module_function("pin_mode", gp_pin_mode),
    be_native_module_function("digital_write", gp_digital_write),
    be_native_module_function("digital_read", gp_digital_read),

    be_native_module_function("pin_used", gp_pin_used),
    be_native_module_function("pin", gp_pin),

};

be_define_native_module(gpio, NULL);
#else
/* @const_object_info_begin
module gpio (scope: global) {
    LOW, int(0)
    HIGH, int(1)
    
    INPUT, int(1)
    OUTPUT, int(2)
    PULLUP, int(4)
    INPUT_PULLUP, int(5)
    PULLDOWN, int(8)
    INPUT_PULLDOWN, int(9)
    OPEN_DRAIN, int(16)
    OUTPUT_OPEN_DRAIN, int(18)

    RISING, int(1)
    FALLING, int(2)
    CHANGE, int(4)

    NONE, int(0)
    KEY1, int(1)
    KEY1_NP, int(2)
    KEY1_INV, int(3)
    KEY1_INV_NP, int(4)
    SWT1, int(5)
    SWT1_NP, int(6)
    REL1, int(7)
    REL1_INV, int(8)
    LED1, int(9)
    LED1_INV, int(10)
    CNTR1, int(11)
    CNTR1_NP, int(12)
    PWM1, int(13)
    PWM1_INV, int(14)
    BUZZER, int(15)
    BUZZER_INV, int(16)
    LEDLNK, int(17)
    LEDLNK_INV, int(18)
    I2C_SCL, int(19)
    I2C_SDA, int(20)
    SPI_MISO, int(21)
    SPI_MOSI, int(22)
    SPI_CLK, int(23)
    SPI_CS, int(24)
    SPI_DC, int(25)
    SSPI_MISO, int(26)
    SSPI_MOSI, int(27)
    SSPI_SCLK, int(28)
    SSPI_CS, int(29)
    SSPI_DC, int(30)
    BACKLIGHT, int(31)
    OLED_RESET, int(32)
    IRSEND, int(33)
    IRRECV, int(34)
    RFSEND, int(35)
    RFRECV, int(36)
    DHT11, int(37)
    DHT22, int(38)
    SI7021, int(39)
    DHT11_OUT, int(40)
    DSB, int(41)
    DSB_OUT, int(42)
    WS2812, int(43)
    MHZ_TXD, int(44)
    MHZ_RXD, int(45)
    PZEM0XX_TX, int(46)
    PZEM004_RX, int(47)
    PZEM016_RX, int(48)
    PZEM017_RX, int(49)
    SAIR_TX, int(50)
    SAIR_RX, int(51)
    PMS5003_TX, int(52)
    PMS5003_RX, int(53)
    SDS0X1_TX, int(54)
    SDS0X1_RX, int(55)
    SBR_TX, int(56)
    SBR_RX, int(57)
    SR04_TRIG, int(58)
    SR04_ECHO, int(59)
    SDM120_TX, int(60)
    SDM120_RX, int(61)
    SDM630_TX, int(62)
    SDM630_RX, int(63)
    TM1638CLK, int(64)
    TM1638DIO, int(65)
    TM1638STB, int(66)
    MP3_DFR562, int(67)
    HX711_SCK, int(68)
    HX711_DAT, int(69)
    TX2X_TXD_BLACK, int(70)
    TUYA_TX, int(71)
    TUYA_RX, int(72)
    MGC3130_XFER, int(73)
    MGC3130_RESET, int(74)
    RF_SENSOR, int(75)
    AZ_TXD, int(76)
    AZ_RXD, int(77)
    MAX31855CS, int(78)
    MAX31855CLK, int(79)
    MAX31855DO, int(80)
    NRG_SEL, int(81)
    NRG_SEL_INV, int(82)
    NRG_CF1, int(83)
    HLW_CF, int(84)
    HJL_CF, int(85)
    MCP39F5_TX, int(86)
    MCP39F5_RX, int(87)
    MCP39F5_RST, int(88)
    PN532_TXD, int(89)
    PN532_RXD, int(90)
    SM16716_CLK, int(91)
    SM16716_DAT, int(92)
    SM16716_SEL, int(93)
    DI, int(94)
    DCKI, int(95)
    CSE7766_TX, int(96)
    CSE7766_RX, int(97)
    ARIRFRCV, int(98)
    ARIRFSEL, int(99)
    TXD, int(100)
    RXD, int(101)
    ROT1A, int(102)
    ROT1B, int(103)
    ADC_JOY, int(104)
    SSPI_MAX31865_CS1, int(105)
    HRE_CLOCK, int(106)
    HRE_DATA, int(107)
    ADE7953_IRQ, int(108)
    SOLAXX1_TX, int(109)
    SOLAXX1_RX, int(110)
    ZIGBEE_TX, int(111)
    ZIGBEE_RX, int(112)
    RDM6300_RX, int(113)
    IBEACON_TX, int(114)
    IBEACON_RX, int(115)
    A4988_DIR, int(116)
    A4988_STP, int(117)
    A4988_ENA, int(118)
    A4988_MS1, int(119)
    OUTPUT_HI, int(120)
    OUTPUT_LO, int(121)
    DDS2382_TX, int(122)
    DDS2382_RX, int(123)
    DDSU666_TX, int(124)
    DDSU666_RX, int(125)
    SM2135_CLK, int(126)
    SM2135_DAT, int(127)
    DEEPSLEEP, int(128)
    EXS_ENABLE, int(129)
    TASMOTACLIENT_TXD, int(130)
    TASMOTACLIENT_RXD, int(131)
    TASMOTACLIENT_RST, int(132)
    TASMOTACLIENT_RST_INV, int(133)
    HPMA_RX, int(134)
    HPMA_TX, int(135)
    GPS_RX, int(136)
    GPS_TX, int(137)
    HM10_RX, int(138)
    HM10_TX, int(139)
    LE01MR_RX, int(140)
    LE01MR_TX, int(141)
    CC1101_GDO0, int(142)
    CC1101_GDO2, int(143)
    HRXL_RX, int(144)
    ELECTRIQ_MOODL_TX, int(145)
    AS3935, int(146)
    ADC_INPUT, int(147)
    ADC_TEMP, int(148)
    ADC_LIGHT, int(149)
    ADC_BUTTON, int(150)
    ADC_BUTTON_INV, int(151)
    ADC_RANGE, int(152)
    ADC_CT_POWER, int(153)
    WEBCAM_PWDN, int(154)
    WEBCAM_RESET, int(155)
    WEBCAM_XCLK, int(156)
    WEBCAM_SIOD, int(157)
    WEBCAM_SIOC, int(158)
    WEBCAM_DATA, int(159)
    WEBCAM_VSYNC, int(160)
    WEBCAM_HREF, int(161)
    WEBCAM_PCLK, int(162)
    WEBCAM_PSCLK, int(163)
    WEBCAM_HSD, int(164)
    WEBCAM_PSRCS, int(165)
    BOILER_OT_RX, int(166)
    BOILER_OT_TX, int(167)
    WINDMETER_SPEED, int(168)
    KEY1_TC, int(169)
    BL0940_RX, int(170)
    TCP_TX, int(171)
    TCP_RX, int(172)
    ETH_PHY_POWER, int(173)
    ETH_PHY_MDC, int(174)
    ETH_PHY_MDIO, int(175)
    TELEINFO_RX, int(176)
    TELEINFO_ENABLE, int(177)
    LMT01, int(178)
    IEM3000_TX, int(179)
    IEM3000_RX, int(180)
    ZIGBEE_RST, int(181)
    DYP_RX, int(182)
    MIEL_HVAC_TX, int(183)
    MIEL_HVAC_RX, int(184)
    WE517_TX, int(185)
    WE517_RX, int(186)
    AS608_TX, int(187)
    AS608_RX, int(188)
    SHELLY_DIMMER_BOOT0, int(189)
    SHELLY_DIMMER_RST_INV, int(190)
    RC522_RST, int(191)
    P9813_CLK, int(192)
    P9813_DAT, int(193)
    OPTION_A, int(194)
    FTC532, int(195)
    RC522_CS, int(196)
    NRF24_CS, int(197)
    NRF24_DC, int(198)
    ILI9341_CS, int(199)
    ILI9341_DC, int(200)
    ILI9488_CS, int(201)
    EPAPER29_CS, int(202)
    EPAPER42_CS, int(203)
    SSD1351_CS, int(204)
    RA8876_CS, int(205)
    ST7789_CS, int(206)
    ST7789_DC, int(207)
    SSD1331_CS, int(208)
    SSD1331_DC, int(209)
    SDCARD_CS, int(210)
    ROT1A_NP, int(211)
    ROT1B_NP, int(212)
    ADC_PH, int(213)
    BS814_CLK, int(214)
    BS814_DAT, int(215)
    WIEGAND_D0, int(216)
    WIEGAND_D1, int(217)
    NEOPOOL_TX, int(218)
    NEOPOOL_RX, int(219)
    SDM72_TX, int(220)
    SDM72_RX, int(221)
    TM1637CLK, int(222)
    TM1637DIO, int(223)
    PROJECTOR_CTRL_TX, int(224)
    PROJECTOR_CTRL_RX, int(225)
    SSD1351_DC, int(226)
    XPT2046_CS, int(227)
    CSE7761_TX, int(228)
    CSE7761_RX, int(229)
    VL53L0X_XSHUT1, int(230)
    MAX7219CLK, int(231)
    MAX7219DIN, int(232)
    MAX7219CS, int(233)
    TFMINIPLUS_TX, int(234)
    TFMINIPLUS_RX, int(235)
    ZEROCROSS, int(236)
    HALLEFFECT, int(237)
    EPD_DATA, int(238)
    INPUT, int(239)
    KEY1_PD, int(240)
    KEY1_INV_PD, int(241)
    SWT1_PD, int(242)
    I2S_OUT_DATA, int(243)
    I2S_OUT_CLK, int(244)
    I2S_OUT_SLCT, int(245)
    I2S_IN_DATA, int(246)
    I2S_IN_CLK, int(247)
    I2S_IN_SLCT, int(248)
    INTERRUPT, int(249)

    SENSOR_END, int(250)

    pin_mode, func(gp_pin_mode)
    digital_write, func(gp_digital_write)
    digital_read, func(gp_digital_read)

    pin_used, func(gp_pin_used)
    pin, func(gp_pin)
}
@const_object_info_end */
#include "../generate/be_fixed_gpio.h"
#endif
