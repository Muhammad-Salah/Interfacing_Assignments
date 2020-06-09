/*
 * LED_DRIVER.h
 *
 * Created: 05/06/2020 08:17:47 ص
 *  Author: mohamed
 */ 


#ifndef LED_DRIVER_H_
#define LED_DRIVER_H_

#include "BIT_MATH.h"
#include "App_conf.h"

void LED_ON()
{
	SET_BIT(LED_PORT,LED);
}

void LED_OFF()
{
	CLEAR_BIT(LED_PORT,LED);
}

void LED_INIT()
{
	SET_BIT(LED_DDR,LED);
}

#endif /* LED_DRIVER_H_ */