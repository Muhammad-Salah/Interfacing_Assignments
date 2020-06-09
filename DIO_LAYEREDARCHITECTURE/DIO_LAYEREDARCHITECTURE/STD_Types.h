/*
 * STD_Types.h
 *
 * Created: 05/06/2020 12:26:00 م
 *  Author: Muhammad
 */ 


#ifndef STD_TYPES_H_
#define STD_TYPES_H_

//unsigned
typedef  unsigned char        uint8;
typedef  unsigned int         uint16;
typedef  unsigned long int    uint32;
//signed
typedef   signed char        sint8;
typedef   signed int         sint16;
typedef   signed long int    sint32;

typedef  float                float16;
typedef  double               float32;

typedef enum{
	STD_LOW,
	STD_HIGH
	}STD_LevelType;     // size of enum equals size of WORD of used processor
	                    // aS it relates only with integers and it is size of integer
						// EXCEPT :
						//         using command line at compiling and make it short enum = 8bits
						  



#endif /* STD_TYPES_H_ */