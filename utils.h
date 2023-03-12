/*
 * utils.h
 *
 *  Created on: 2023. 2. 25.
 *      Author: matar
 */


#ifndef INCLUDE_UTILS_H_
#define INCLUDE_UTILS_H_
#include "def.h"




void delay(uint32_t ms);
uint32_t millis(void);

bool Print_string(UART_HandleTypeDef *huart,char* str);
bool Print_string_with_val(UART_HandleTypeDef *huart,char* str, double val);


#endif /* INCLUDE_UTILS_H_ */
