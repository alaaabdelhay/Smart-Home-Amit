/*
 * STD_TYPES.h
 *
 * Created: 1/21/2026 9:28:25 PM
 *  Author: Mazen Salem
 */ 


#ifndef STD_TYPES_H
#define STD_TYPES_H


typedef unsigned char               u8;
typedef signed char                 s8;

typedef unsigned short int			u16;
typedef signed short int            s16;

typedef unsigned long int           u32;
typedef signed long int             s32;

typedef float                       f32;
typedef double                      f64;


typedef enum
{
	FALSE,
	TRUE
}bool_t;


#define NULL                        (void*)0

#endif