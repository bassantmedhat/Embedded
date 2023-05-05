/*
 * Keypad.h
 *
  Name : bassant medhat
  sec : 1
  bn :21
 */

#ifndef KEYPAD_H
#define KEYPAD_H

#include "Gpio.h"
#include "Std_Types.h"



#define COL_PORT GPIO_B
#define COL_START_INDEX 0
#define COL_END_INDEX 2


#define ROW_PORT GPIO_B
#define ROW_START_INDEX 6
#define ROW_END_INDEX 9

#define KEYPAD_MAX_COLS 3
#define KEYPAD_MAX_ROWS 4

#define KEYPAD_BUTTON_PRESSED 0
#define KEYPAD_BUTTON_RELEASE 1

//#define uint8 key 0

void Keypad_init(void);

void Keypad_manage(void);

uint8 Keypad_GetKey(void);

void KeypadCallouts_KeyPressNotificaton();


















#endif
