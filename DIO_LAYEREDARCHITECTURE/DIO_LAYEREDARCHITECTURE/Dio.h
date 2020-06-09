/*
 * Dio.h
 *
 * Created: 05/06/2020 01:29:18 م
 *  Author: Muhammad
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "STD_Types.h"
#include "DIO_Types.h"

//Prototypes
void Dio_WriteChanel( Dio_ChannelType channelId,STD_LevelType Level );
STD_LevelType Dio_ReadChannel( Dio_ChannelType channelId );
void Dio_WritePort( Dio_PortType PortId,uint8 value );
//TO DO .... READ PORT
uint8 Dio_ReadPort(Dio_PortType PortId);



#endif /* DIO_H_ */