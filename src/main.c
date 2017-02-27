/*
 * main.c
 *
 *  Created on: Sep 13, 2016
 *      Author: t400
 */
#include "DevBoard_lib.h"
#include "Strings.h"

	const char temp[] = "Hello";

uint8_t main(){

	UARTInit();
	UARTSendString_P(welcome_user);
	while(1);
	return 0;

}


