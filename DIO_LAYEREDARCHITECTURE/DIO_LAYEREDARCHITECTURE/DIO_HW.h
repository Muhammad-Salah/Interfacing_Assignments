/*
 * DIO_HW.h
 *
 * Created: 05/06/2020 12:27:07 م
 *  Author: Muhammad
 */ 


#ifndef DIO_HW_H_
#define DIO_HW_H_

#include "STD_Types.h"

#define      DDRA_REG       *((volatile uint8*)0x3A)
#define      PINA_REG       *((volatile const uint8*)0x39)
#define      PORTA_REG      *((volatile uint8*)0x3B)

#define      DDRB_REG       *((volatile uint8*)0x37)
#define      PINB_REG       *((volatile const uint8*)0x36)
#define      PORTB_REG      *((volatile uint8*)0x38)

#define      DDRC_REG       *((volatile uint8*)0x34)
#define      PINC_REG       *((volatile const uint8*)0x33)
#define      PORTC_REG      *((volatile uint8*)0x35)

#define      DDRD_REG       *((volatile uint8*)0x31)
#define      PIND_REG       *((volatile const uint8*)0x30)
#define      PORTD_REG      *((volatile uint8*)0x32)



#endif /* DIO_HW_H_ */