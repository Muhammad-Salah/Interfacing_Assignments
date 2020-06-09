/*
 * DIO_LAYEREDARCHITECTURE.c
 *
 * Created: 05/06/2020 11:50:25 ص
 * Author : CRIZMA MEGA STORE
 */ 

 #define  F_CPU 16000000
 #include <util/delay.h>
 #include "Dio.h"
 #include "dio_cfg.h"
 #include "STD_Types.h"

 
int main(void)
{
   Dio_Init();
   
    while (1) 
    {
		Dio_WriteChanel(Dio_Channel_D3,STD_HIGH);
		_delay_ms(100);
		
    }
}

