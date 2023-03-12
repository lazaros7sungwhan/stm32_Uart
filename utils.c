/*
 * utils.c
 *
 *  Created on: 2023. 2. 25.
 *      Author: matar
 */
#include "utils.h"
#include "def.h"
#include <stdio.h>




void delay(uint32_t ms)
{
	HAL_Delay(ms);
}

uint32_t millis(void)
{
	return HAL_GetTick();
}


bool Print_string(UART_HandleTypeDef *huart,char* str)
{
//	char temp_string1[125];
//	char *ptr1;
//	memset(temp_string1,0x00,strlen(temp_string1));
//	sprintf(ptr1,str);
	HAL_UART_Transmit(huart, str, strlen(str), 50);
	return true;
}

bool Print_string_with_val(UART_HandleTypeDef *huart,char* str, double val)
{
	char string2[125];
	char *ptr, *formerPtr;
 	ptr=string2;
	memset(string2, 0x00, 125);
	sprintf(ptr,str);
	formerPtr=ptr;
	ptr+=strlen(ptr);

	sprintf(ptr," %.1f.. \n",val);

	HAL_UART_Transmit(huart, formerPtr, strlen(formerPtr), 50);
	return true;
}
