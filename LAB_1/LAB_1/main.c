/*
 * LAB_1.c
 *
 * Created: 05/06/2020 07:20:18 ص
 * Author : mohamed_salah
 * LAB 1
 */ 
//#include <avr/io.h>
#define  F_CPU 16000000
#include <util/delay.h>
#include "App_conf.h"
#include "BIT_MATH.h"
#include "LED_DRIVER.h"
#include "BUZZER_DRIVER.h"
#include "BUTTON_DRIVER.h"


int main(void)
{   
	BUTTON_INIT();
	LED_INIT();
	BUZZER_INIT();
	uint8 counter=0;
    
    while (1) 
    {
		if (BUTTON_CHECK()==HIGH)
		{
			_delay_ms(50);
			counter++;
			if ( counter < 3)
			{
				LED_OFF();
				BUZZER_OFF();
			}
			else if ( counter == 3 )
			{
				BUZZER_OFF();
				LED_ON();
				_delay_ms(1000);
			}
			else if ( (counter > 3) && (counter < 5)  )
			{
				BUZZER_ON();
				LED_ON();
				_delay_ms(1000);
			}
			else if ( counter > 5 )
			{
				LED_OFF();
				BUZZER_ON();
				_delay_ms(1000);
			}
			else
			{
			  	LED_OFF();
			    BUZZER_OFF();
			}
		}
    }
}

