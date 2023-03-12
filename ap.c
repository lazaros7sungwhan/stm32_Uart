/*
 * ap.c
 *
 *  Created on: 2023. 2. 25.
 *      Author: matar
 */

#include "ap.h"

extern UART_HandleTypeDef huart2;

void apInit(void)
{

}
void apMain(void)
{
	double count=0,count2=0;
	double pre_time=0;

	while(1)
	{
		if((millis()-pre_time)>100	)
		{

			pre_time=millis();
			char *strPtr1="Count data :";
//		    char test1[30];
//			char *ptr, *formerptr;
//
//		    ptr=test1;
//
//		 	sprintf(ptr,"Data_test : ");
//		  	formerptr=ptr;
//			ptr+=strlen(ptr);
//
//		    sprintf(ptr,"%0.5f \n",count2);
//
//			HAL_UART_Transmit(&huart2, formerptr, strlen(formerptr), 50);
//			count=(count+1);
//			count2=count/100;
//			Print_string(&huart2, strPtr1);
			Print_string_with_val(&huart2, strPtr1, count);
			count++;
		}
	}
}

