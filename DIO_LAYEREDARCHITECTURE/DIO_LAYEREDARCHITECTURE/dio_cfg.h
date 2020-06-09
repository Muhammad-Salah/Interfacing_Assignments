/*
 * dio_cfg.h
 *
 * Created: 08/06/2020 01:00:58 م
 *  Author: Muhammad Salah eldin
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#include "STD_Types.h"
#include "DIO_Types.h"
#define   PinCount  32

typedef struct{
	Dio_DirType PinDirection;   // i/p or o/p
	STD_LevelType PinLevel;     // initial state 
	
}Dio_PinType;

extern const Dio_PinType Pin_cfg[PinCount];  //array of structure 

void Dio_Init();   //access every pin then know input or output 

#endif /* DIO_CFG_H_ */