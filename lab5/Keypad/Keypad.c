/*
 * Keypad.c
 *
 Name : bassant medhat
  sec : 1
  bn :21
 */

#include "Keypad.h"
#include "Gpio.h"
#include "Std_Types.h"


uint8 key ;

void Keypad_init(void){

	uint8 index = 0 ;
	for(index = COL_START_INDEX; index <= COL_END_INDEX; ++index){
		Gpio_ConfigPin(COL_PORT, index, GPIO_INPUT,GPIO_INPUT_PULL_UP);

	}

	for(index = ROW_START_INDEX; index <= ROW_END_INDEX; ++index){

		Gpio_ConfigPin(ROW_PORT, index, GPIO_OUTPUT, GPIO_PUSH_PULL);
		Gpio_WritePin(ROW_PORT, index,  KEYPAD_BUTTON_RELEASE);

	  }


}

void Keypad_manage(void){
	uint8 rows_iter;
	uint8 cols_iter;


	for (rows_iter =  ROW_START_INDEX; rows_iter <= ROW_END_INDEX; rows_iter++){
		Gpio_WritePin(ROW_PORT, rows_iter,  KEYPAD_BUTTON_PRESSED);
		for (cols_iter= COL_START_INDEX; cols_iter<= COL_END_INDEX; cols_iter++){
			if(GPIO_ReadPin(COL_PORT, cols_iter) == KEYPAD_BUTTON_PRESSED){
				for (unsigned int i =0 ; i <30;i++);
				if(GPIO_ReadPin(COL_PORT, cols_iter) == KEYPAD_BUTTON_PRESSED){
					key = ((rows_iter-ROW_START_INDEX)* KEYPAD_MAX_COLS) + (cols_iter-COL_START_INDEX);
					KeypadCallouts_KeyPressNotificaton();
				}
			}
		}
		Gpio_WritePin(ROW_PORT, rows_iter, KEYPAD_BUTTON_RELEASE);
	}



}
uint8 Keypad_GetKey(void){

	return key;
}




