

#include "Gpio.h"

#include "Gpio_Private.h"
#include "Utils.h"
char value;

void Gpio_ConfigPin(uint8 PortName, uint8 PinNum, uint8 PinMode,
                    uint8 DefaultState) {
  switch (PortName) {
    case GPIO_A:

      GPIOA_MODER &= ~(0x03 << (PinNum * 2));
      GPIOA_MODER |= (PinMode << (PinNum * 2));

      GPIOA_OTYPER &= ~(0x01 << PinNum);
      GPIOA_OTYPER |= (DefaultState << PinNum);

      break;
    case GPIO_B:
      GPIOB_MODER &= ~(0x03 << (PinNum * 2));
      GPIOB_MODER |= (PinMode << (PinNum * 2));

      GPIOB_OTYPER &= ~(0x01 << PinNum);
      GPIOB_OTYPER |= (DefaultState << PinNum);
      break;
    case GPIO_C:
        GPIOC_MODER &= ~(0x03 << (PinNum * 2));
        GPIOC_MODER |= (PinMode << (PinNum * 2));

        GPIOC_OTYPER &= ~(0x01 << PinNum);
        GPIOC_OTYPER |= (DefaultState << PinNum);
      break;
    case GPIO_D:
        GPIOD_MODER &= ~(0x03 << (PinNum * 2));
        GPIOD_MODER |= (PinMode << (PinNum * 2));

        GPIOD_OTYPER &= ~(0x01 << PinNum);
        GPIOD_OTYPER |= (DefaultState << PinNum);
      break;

  }
}

char Gpio_WritePin(uint8 PortName, uint8 PinNum, uint8 Data) {

 //TODO: check if the pin is output
	  switch (PortName) {
	  case GPIO_A:
		  if((GPIOA_MODER & (1<<PinNum*2)) >> (PinNum*2)){
	  					GPIOA_ODR &= ~(0x1 << PinNum);
	  					GPIOA_ODR |= (Data << PinNum);
	  					return OK;
	  				}
	  				else{
	  					return NOK;
	  				}
	      break;
	  case GPIO_B:
		  	  if((GPIOB_MODER & (1<<PinNum*2)) >> (PinNum*2)){
	  					GPIOB_ODR &= ~(0x1 << PinNum);
	  					GPIOB_ODR |= (Data << PinNum);
	  					return OK;
	  				}
	  				else{
	  					return NOK;
	  				}
	      break;
	    case GPIO_C:
	    				if((GPIOC_MODER & (1<<PinNum*2)) >> (PinNum*2)){
	    					GPIOC_ODR &= ~(0x1 << PinNum);
	    					GPIOC_ODR |= (Data << PinNum);
	    					return OK;
	    				}
	    				else{
	    					return NOK;
	    				}
	      break;
	    case GPIO_D:
	    			if((GPIOD_MODER & (1<<PinNum*2)) >> (PinNum*2)){
	    					GPIOD_ODR &= ~(0x1 << PinNum);
	    					GPIOD_ODR |= (Data << PinNum);
	    					return OK;
	    				}
	    				else{
	    					return NOK;
	    				}
	      break;
	    default:
	      break;
	  }


}

char GPIO_ReadPin(uint8 PortName, uint8 PinNum){

	  switch (PortName) {
	  case GPIO_A:
		  value = (GPIOA_IDR & (1<< PinNum));
		  return value;
	      break;
	  case GPIO_B:
		  value = (GPIOB_IDR & (1<< PinNum));
		  return value;
	      break;
	    case GPIO_C:
			  value = (GPIOC_IDR & (1<< PinNum));
			  return value;
		      break;
	    case GPIO_D:
			  value = (GPIOD_IDR & (1<< PinNum));
			  return value;
		      break;
	    default:
	      break;
	  }

}

