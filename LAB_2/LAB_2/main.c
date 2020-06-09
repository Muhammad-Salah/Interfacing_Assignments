/*
 * LAB_2.c
 *
 * Created: 05/06/2020 08:39:06 ص
 * Author : CRIZMA MEGA STORE
 */ 

#define  F_CPU 16000000
#include <util/delay.h>
#include "App_conf.h"
#include "BUTTON_DRIVER.h"
#include "LED_DRIVER.h"


int main(void)
{
    BUTTON_INIT();
	LED_INIT();
	
    while (1) 
    {
		if ( BUTTON_CHECK()==LOW)
		{
			_delay_ms(50);
			LED1_ON();
			LED2_OFF();
			LED3_OFF();
			LED4_OFF();
			LED5_OFF();
			LED6_OFF();
			LED7_OFF();
			LED8_OFF();
			_delay_ms(1000);
			LED1_OFF();
			LED2_ON();
			LED3_OFF();
			LED4_OFF();
			LED5_OFF();
			LED6_OFF();
			LED7_OFF();
			LED8_OFF();
			_delay_ms(1000);
			LED1_OFF();
			LED2_OFF();
			LED3_ON();
			LED4_OFF();
			LED5_OFF();
			LED6_OFF();
			LED7_OFF();
			LED8_OFF();
			_delay_ms(1000); 
			LED1_OFF();
			LED2_OFF();
			LED3_OFF();
			LED4_ON();
			LED5_OFF();
			LED6_OFF();
			LED7_OFF();
			LED8_OFF();
			_delay_ms(1000);
			LED1_OFF();
			LED2_OFF();
			LED3_OFF();
			LED4_OFF();
			LED5_ON();
			LED6_OFF();
			LED7_OFF();
			LED8_OFF();
			_delay_ms(1000);
			LED1_OFF();
			LED2_OFF();
			LED3_OFF();
			LED4_OFF();
			LED5_OFF();
			LED6_ON();
			LED7_OFF();
			LED8_OFF();
			_delay_ms(1000);
			LED1_OFF();
			LED2_OFF();
			LED3_OFF();
			LED4_OFF();
			LED5_OFF();
			LED6_OFF();
			LED7_ON();
			LED8_OFF();
			_delay_ms(1000);
			LED1_OFF();
			LED2_OFF();
			LED3_OFF();
			LED4_OFF();
			LED5_OFF();
			LED6_OFF();
			LED7_OFF();
			LED8_ON();
			_delay_ms(1000);
		}
    }
}

