#include "Strings.h"

const char welcome_user[] PROGMEM 	= "\n\r\tBusRider v0.1";
const char main_menu[] PROGMEM 		= 	"\n\rChoose one of the following:"
										"\n\r(1) I2C"
									  	"\n\r(2) SPI"
									  	"\n\r(3) 1Wire"
									  	"\n\r(S) Settings";
const char i2c_menu[] PROGMEM		= "\n\rI2C mode\n\r";
const char i2c_help[] PROGMEM		= "\n\r You can specify packets content by:\n\r"
											"\n\r\t [ :start packet, issuing start condution"
											"\n\r\t ] :stop the communication, issuing stop condution"
											"\n\r\t r :read 8bit value from bus";


