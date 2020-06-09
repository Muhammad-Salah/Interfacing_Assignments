/*
 * Dio.c
 *
 * Created: 05/06/2020 01:38:25 م
 *  Author: Muhammad
 */ 

#include "DIO_HW.h"
#include "Dio.h"
#include "BIT_MATH.h"
#include "DIO_Types.h"


// Dio_ReadChannel( Dio_ChannelA0 );
STD_LevelType Dio_ReadChannel( Dio_ChannelType channelId )
{
	// which port ?
	Dio_PortType portx = channelId / 8;
	//position inside port ?
	Dio_ChannelType  pos = channelId % 8;
	
	STD_LevelType ret = STD_LOW;
	switch (portx){
		
		   case Dio_PortA:
		                  ret = GET_BIT(PINA_REG,pos);
						  break;
	       
		   case Dio_PortB:
		                  ret = GET_BIT(PINB_REG,pos);
						  break;
			
		   case Dio_PortC:
		                  ret = GET_BIT(PINC_REG,pos);
						  break;
						 
		   case Dio_PortD:
		                  ret = GET_BIT(PIND_REG,pos);
						  break;			  			  			  
				            
		   default:
		           break;				
	}
	return ret;
}



//Dio_WriteChannel(Dio_channel_A0,STD_HIGH);
void Dio_WriteChanel(Dio_ChannelType channelId,STD_LevelType Level)
{
	//port of channel?	
	Dio_PortType portx = channelId/8; // 1/8=0   , 0~3
	
	//position of the channel inside the port 0~7	
	Dio_ChannelType Pos = channelId % 8;  
	
	switch(portx){
		
		case Dio_PortA:
		              if (Level == STD_HIGH)
		              {
						  SET_BIT( PORTA_REG , Pos );
		              }
					  else{
						  CLEAR_BIT( PORTA_REG , Pos );
					  }
					  break;
		
		case Dio_PortB:
		               if (Level == STD_HIGH)
		               {
			               SET_BIT( PORTB_REG , Pos );
		               }
		               else{
			               CLEAR_BIT( PORTB_REG , Pos );
		               }
		               break;
		
		case Dio_PortC:
					   if (Level == STD_HIGH)
					   {
						   SET_BIT( PORTC_REG , Pos );
					   }
					   else{
						   CLEAR_BIT( PORTC_REG , Pos );
					   }
					   break;	
		case Dio_PortD:
		               if (Level == STD_HIGH)
		               {
			               SET_BIT( PORTD_REG , Pos );
		               }
		               else{
			               CLEAR_BIT( PORTD_REG , Pos );
		               }
		               break;
        default:
	           break;	
	}
	
}

void Dio_WritePort(Dio_PortType portId , uint8 value)
{
	switch(portId){
		
		case Dio_PortA:
		               PORTA_REG = value;
					   break;
		case Dio_PortB:
		               PORTB_REG = value;
					   break;
		case Dio_PortC:
		               PORTC_REG = value;
					   break;
		case Dio_PortD:
		               PORTD_REG = value;
					   break;
		default:
		        break;			   			   			   			   
		
	}
}
uint8 Dio_ReadPort(Dio_PortType PortId)
{
	uint8 ret;
	switch (PortId){
		
		case Dio_PortA:
		              ret = PINA_REG;
					  break;
        case  Dio_PortB:
		              ret = PINB_REG;
					  break;
		case Dio_PortC:
		              ret = PINC_REG;
					  break;
		case Dio_PortD:
		              ret = PIND_REG;
					  break;
		default:
		        break;			  			  			         					  
	}
	return ret;
	
}
