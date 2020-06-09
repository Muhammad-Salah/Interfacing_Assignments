/*
 * BUZZER_DRIVER.h
 *
 * Created: 05/06/2020 08:25:50 ص
 *  Author:mohamed
 */ 


#ifndef BUZZER_DRIVER_H_
#define BUZZER_DRIVER_H_

#include "BIT_MATH.h"
#include "App_conf.h"

void BUZZER_ON()
{
	SET_BIT(BUZZER_PORT,BUZZER);
}

void BUZZER_OFF()
{
	CLEAR_BIT(BUZZER_PORT,BUZZER);
}

void BUZZER_INIT()
{
	SET_BIT(BUZZER_DDR,BUZZER);
}



#endif /* BUZZER_DRIVER_H_ */