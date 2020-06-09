/*
 * dio_cfg.c
 *
 * Created: 08/06/2020 01:00:35 م
 *  Author: Muhammad Salah eldin
 */ 

#include "dio_cfg.h"
#include "BIT_MATH.h"
#include "DIO_HW.h"

const Dio_PinType Pin_cfg[PinCount] = {
/*PA0*/	{Output,STD_LOW},
/*PA1*/	{Input,STD_HIGH},  // input with pull-up
/*PA2*/	{Output,STD_LOW},
/*PA3*/	{Output,STD_LOW},
/*PA4*/	{Output,STD_LOW},
/*PA5*/	{Input,STD_HIGH},  // input with pull-up
/*PA6*/	{Output,STD_LOW},
/*PA7*/	{Output,STD_LOW},	
/*PB0*/	{Output,STD_LOW},
/*PB1*/	{Input,STD_HIGH},  // input with pull-up
/*PB2*/	{Output,STD_LOW},
/*PB3*/	{Output,STD_LOW},	
/*PB4*/	{Output,STD_LOW},
/*PB5*/	{Input,STD_HIGH},  // input with pull-up
/*PB6*/	{Output,STD_LOW},
/*PB7*/	{Output,STD_LOW},	
/*PC0*/	{Output,STD_LOW},
/*PC1*/	{Input,STD_HIGH},  // input with pull-up
/*PC2*/	{Output,STD_LOW},
/*PC3*/	{Output,STD_LOW},
/*PC4*/	{Output,STD_LOW},
/*PC5*/	{Input,STD_HIGH},  // input with pull-up
/*PC6*/	{Output,STD_LOW},
/*PC7*/	{Output,STD_LOW},		
/*PD0*/	{Output,STD_LOW},
/*PD1*/	{Input,STD_HIGH},  // input with pull-up
/*PD2*/	{Output,STD_LOW},
/*PD3*/	{Output,STD_LOW},
/*PD4*/	{Output,STD_LOW},
/*PD5*/	{Input,STD_HIGH},  // input with pull-up
/*PD6*/	{Output,STD_LOW},			
/*PD7*/	{Output,STD_LOW}	
};

void Dio_Init(){
	//loop on all pins , set DDR for ever pin
	uint8 counter;
	for(counter=Dio_Channel_A0;counter<PinCount;counter++){  
	   Dio_PortType portx = counter/8;
	   Dio_ChannelType pos = counter%8;
	   if (Pin_cfg[counter].PinDirection==Output)
	   {
		   switch (portx){
			   case Dio_PortA:
			                  SET_BIT(DDRA_REG,pos);
							  break;
			   case Dio_PortB:
			                  SET_BIT(DDRB_REG,pos);
			                  break;
			   case Dio_PortC:
			                  SET_BIT(DDRC_REG,pos);
			                  break;
			   case Dio_PortD:
			                  SET_BIT(DDRD_REG,pos);
			                  break;				  				   				  
		                 }
	   }
	   else{
		   switch (portx){
			   case Dio_PortA:
			                  CLEAR_BIT(DDRA_REG,pos);
							  break;
			   case Dio_PortB:
			                  CLEAR_BIT(DDRB_REG,pos);
			                  break;
			   case Dio_PortC:
			                  CLEAR_BIT(DDRC_REG,pos);
			                  break;
			   case Dio_PortD:
			                  CLEAR_BIT(DDRD_REG,pos);
			                  break;				  
		                  }
	       }
	}
}