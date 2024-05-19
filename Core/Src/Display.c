/*
 * Display.c
 *
 *  Created on: May 19, 2024
 *      Author: Dell
 */
#include "global.h"

uint8_t switchLED=1;
void NumberDivision(int number){
	//if(number >= 99 || number <= 0 ) return;
	ledDisplayTime[0] = number /10;
	ledDisplayTime[1] = number %10;

}

void display7PB(int number){
	switch (num){
	case 0:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_SET);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_SET);
    	HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_SET);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_SET);
		break;
	case 8:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(GPIOB, PB0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, PB5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOB, PB6_Pin, GPIO_PIN_RESET);
		break;
    }
}
void Display(){

	if(timer3_flag ==1 && switchLED ==1){
	HAL_GPIO_WritePin(GPIOA, ledDisplay[0], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, ledDisplay[1], GPIO_PIN_SET);
	display7SEG(ledDisplayTime[0]);
	switchLED = 0;
	setTimer3(500);
	}
	if(timer3_flag ==1 && switchLED ==0 ){
	HAL_GPIO_WritePin(GPIOA, ledDisplay[1], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, ledDisplay[0], GPIO_PIN_SET);
	display7SEG(ledDisplayTime[1]);
	switchLED = 1;
		setTimer3(500);
	}

}

