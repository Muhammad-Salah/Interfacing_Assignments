/*
 * BIT_MATH.h
 *
 * Created: 05/06/2020 07:32:36 ص
 *  Author: mohamed
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(var,bit)      var |= ( 1 << bit )
#define TOGGLE_BIT(var,bit)   var ^= ( 1 << bit )
#define CLEAR_BIT(var,bit)    var &=~ ( 1 << bit )
#define GET_BIT(var,bit)      ( ( var >> bit ) & 1 )   




#endif /* BIT_MATH_H_ */