/*
 * BIT_MATH.h
 *
 * Created: 1/21/2026 9:54:16 PM
 *  Author: Mazen Salem
 */ 


#ifndef BIT_MATH_H
#define BIT_MATH_H


#define SET_BIT(REG, BIT_NUM)			REG |= (1 << BIT_NUM)
#define CLR_BIT(REG, BIT_NUM)			REG &= (~(1 << BIT_NUM))
#define TOG_BIT(REG, BIT_NUM)			REG ^= (1 << BIT_NUM)
#define GET_BIT(REG, BIT_NUM)		    (REG >> BIT_NUM) & 1


#endif