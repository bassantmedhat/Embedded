/**
 * Gpio.h
 *
 *
 */

#ifndef GPIO_H
#define GPIO_H
#include "Std_Types.h"

/*PortName*/

#define GPIO_A 'A'
#define GPIO_B 'B'
#define GPIO_C 'C'
#define GPIO_D 'D'

/*PinMode*/
#define GPIO_INPUT  0x00
#define GPIO_OUTPUT 0x01
#define GPIO_AF     0x02
#define GPIO_ANALOG 0x03

/*DefaultState*/
#define GPIO_PUSH_PULL  0x00
#define GPIO_OPEN_DRAIN 0x01


/*Default Input*/
#define GPIO_INPUT_PULL_UP  0x01
#define GPIO_INPUT_PULL_DOWN  0x02

/*Data*/
#define LOW  0x00
#define HIGH 0x01


#define  OK   0
#define  NOK  1

void Gpio_ConfigPin(uint8 PortName, uint8 PinNum, uint8 PinMode, uint8 DefaultState);


char Gpio_WritePin(uint8 PortName, uint8 PinNum, uint8 Data);

char GPIO_ReadPin(uint8 PortName, uint8 PinNum);

#endif /* GPIO_H */
