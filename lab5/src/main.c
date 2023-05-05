/*
 * main.c
 Name : bassant medhat
  sec : 1
  bn :21
 */
#include "Gpio.h"
#include "Rcc.h"
#include "Std_Types.h"
#include "keypad.h"

uint8 array[4][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{0,0,0}
};

int main() {


// **enable clock******
Rcc_Init();
Rcc_Enable(RCC_GPIOA);
Rcc_Enable(RCC_GPIOB);

Keypad_init();
uint32 i = 0;
for (i = 0; i < 7; i++) {
  Gpio_ConfigPin(GPIO_A, i, GPIO_OUTPUT, GPIO_PUSH_PULL);
}

/***********************************/
while(1){
	Keypad_manage();
	}
	return 0;
}
void KeypadCallouts_KeyPressNotificaton(){
	uint8 key = Keypad_GetKey();

	/******************WRITE PINS******************/

	switch(key){
	case 0:
			Gpio_WritePin(GPIO_A, 0, LOW);
			Gpio_WritePin(GPIO_A, 1, HIGH);
			Gpio_WritePin(GPIO_A, 2, HIGH);
			Gpio_WritePin(GPIO_A, 3, LOW);
			Gpio_WritePin(GPIO_A, 4, LOW);
			Gpio_WritePin(GPIO_A, 5, LOW);
			Gpio_WritePin(GPIO_A, 6, LOW);
			break;


		case 1:
			Gpio_WritePin(GPIO_A, 0, HIGH);
			Gpio_WritePin(GPIO_A, 1, HIGH);
			Gpio_WritePin(GPIO_A, 2, LOW);
			Gpio_WritePin(GPIO_A, 3, HIGH);
			Gpio_WritePin(GPIO_A, 4, HIGH);
			Gpio_WritePin(GPIO_A, 5, LOW);
			Gpio_WritePin(GPIO_A, 6, HIGH);
			break;


		case 2:
			Gpio_WritePin(GPIO_A, 0, HIGH);
			Gpio_WritePin(GPIO_A, 1, HIGH);
			Gpio_WritePin(GPIO_A, 2, HIGH);
			Gpio_WritePin(GPIO_A, 3, HIGH);
			Gpio_WritePin(GPIO_A, 4, LOW);
			Gpio_WritePin(GPIO_A, 5, LOW);
			Gpio_WritePin(GPIO_A, 6, HIGH);
			break;

		case 3:
			Gpio_WritePin(GPIO_A, 0, LOW);
			Gpio_WritePin(GPIO_A, 1, HIGH);
			Gpio_WritePin(GPIO_A, 2, HIGH);
			Gpio_WritePin(GPIO_A, 3, LOW);
			Gpio_WritePin(GPIO_A, 4, LOW);
			Gpio_WritePin(GPIO_A, 5, HIGH);
			Gpio_WritePin(GPIO_A, 6, HIGH);
			break;

		case 4:
			Gpio_WritePin(GPIO_A, 0, HIGH);
			Gpio_WritePin(GPIO_A, 1, LOW);
			Gpio_WritePin(GPIO_A, 2, HIGH);
			Gpio_WritePin(GPIO_A, 3, HIGH);
			Gpio_WritePin(GPIO_A, 4, LOW);
			Gpio_WritePin(GPIO_A, 5, HIGH);
			Gpio_WritePin(GPIO_A, 6, HIGH);
			break;

		case 5:
			Gpio_WritePin(GPIO_A, 0, HIGH);
			Gpio_WritePin(GPIO_A, 1, LOW);
			Gpio_WritePin(GPIO_A, 2, HIGH);
			Gpio_WritePin(GPIO_A, 3, HIGH);
			Gpio_WritePin(GPIO_A, 4, HIGH);
			Gpio_WritePin(GPIO_A, 5, HIGH);
			Gpio_WritePin(GPIO_A, 6, HIGH);
			break;

		case 6:
			Gpio_WritePin(GPIO_A, 0, HIGH);
			Gpio_WritePin(GPIO_A, 1, HIGH);
			Gpio_WritePin(GPIO_A, 2, HIGH);
			Gpio_WritePin(GPIO_A, 3, LOW);
			Gpio_WritePin(GPIO_A, 4, LOW);
			Gpio_WritePin(GPIO_A, 5, LOW);
			Gpio_WritePin(GPIO_A, 6, HIGH);
			break;

		case 7:
			Gpio_WritePin(GPIO_A, 0, HIGH);
			Gpio_WritePin(GPIO_A, 1, HIGH);
			Gpio_WritePin(GPIO_A, 2, HIGH);
			Gpio_WritePin(GPIO_A, 3, HIGH);
			Gpio_WritePin(GPIO_A, 4, HIGH);
			Gpio_WritePin(GPIO_A, 5, HIGH);
			Gpio_WritePin(GPIO_A, 6, HIGH);
			break;


		case 8:
			 Gpio_WritePin(GPIO_A, 0, HIGH);
			 Gpio_WritePin(GPIO_A, 1, HIGH);
			 Gpio_WritePin(GPIO_A, 2, HIGH);
			 Gpio_WritePin(GPIO_A, 3, LOW);
			 Gpio_WritePin(GPIO_A, 4, LOW);
			 Gpio_WritePin(GPIO_A, 5, HIGH);
			 Gpio_WritePin(GPIO_A, 6, HIGH);
			 break;


		 case 9:

				Gpio_WritePin(GPIO_A, 0, HIGH);
				Gpio_WritePin(GPIO_A, 1, HIGH);
				Gpio_WritePin(GPIO_A, 2, HIGH);
				Gpio_WritePin(GPIO_A, 3, HIGH);
				Gpio_WritePin(GPIO_A, 4, HIGH);
				Gpio_WritePin(GPIO_A, 5, HIGH);
				Gpio_WritePin(GPIO_A, 6, LOW);
				break;
		 case 10:
				Gpio_WritePin(GPIO_A, 0, HIGH);
				Gpio_WritePin(GPIO_A, 1, HIGH);
				Gpio_WritePin(GPIO_A, 2, HIGH);
				Gpio_WritePin(GPIO_A, 3, HIGH);
				Gpio_WritePin(GPIO_A, 4, HIGH);
				Gpio_WritePin(GPIO_A, 5, HIGH);
				Gpio_WritePin(GPIO_A, 6, LOW);
				break;
		 case 11:
				Gpio_WritePin(GPIO_A, 0, HIGH);
				Gpio_WritePin(GPIO_A, 1, HIGH);
				Gpio_WritePin(GPIO_A, 2, HIGH);
				Gpio_WritePin(GPIO_A, 3, HIGH);
				Gpio_WritePin(GPIO_A, 4, HIGH);
				Gpio_WritePin(GPIO_A, 5, HIGH);
				Gpio_WritePin(GPIO_A, 6, LOW);
				break;

		default:
			Gpio_WritePin(GPIO_A, 0, HIGH);
			Gpio_WritePin(GPIO_A, 1, HIGH);
			Gpio_WritePin(GPIO_A, 2, HIGH);
			Gpio_WritePin(GPIO_A, 3, HIGH);
			Gpio_WritePin(GPIO_A, 4, HIGH);
			Gpio_WritePin(GPIO_A, 5, HIGH);
			Gpio_WritePin(GPIO_A, 6, LOW);
			break;



		}
	for (unsigned int i =0 ; i <400000;i++);

}






