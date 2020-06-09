/*
 * BUTTON_DRIVER.h
 *
 * Created: 05/06/2020 08:22:32 ص
 *  Author: mohamed
 * Active High BUTTON
 */ 


#ifndef BUTTON_DRIVER_H_
#define BUTTON_DRIVER_H_

#include "BIT_MATH.h"
#include "App_conf.h"

void BUTTON_INIT()
{
	CLEAR_BIT(BUTTON_DDR,BUTTON);
}

int BUTTON_CHECK()
{
	uint8 B;
	B = GET_BIT(BUTTON_PIN,BUTTON);
	return B;
}


#endif /* BUTTON_DRIVER_H_ */