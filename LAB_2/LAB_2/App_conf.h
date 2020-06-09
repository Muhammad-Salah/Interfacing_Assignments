/*
 * App_conf.h
 *
 * Created: 05/06/2020 07:25:28 ص
 *  Author: mohamed
 * LAB 1
 */ 


#ifndef APP_CONF_H_
#define APP_CONF_H_

#include "DIO_HW.h"

#define PUD          2 

#define BUTTON       0
#define LED1         0
#define LED2         1
#define LED3         2
#define LED4         3
#define LED5         4
#define LED6         5
#define LED7         6
#define LED8         7
#define BUTTON_PIN   PINB_REG
#define BUTTON_DDR   DDRB_REG
#define BUTTON_PORT  PORTB_REG
#define LED_PORT     PORTA_REG
#define LED_DDR      DDRA_REG



#endif /* APP_CONF_H_ */