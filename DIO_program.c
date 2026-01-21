/*
 * DIO_program.c
 *
 * Created: 1/20/2026 6:47:02 PM
 *  Author: Mazen Salem
 */ 

#include <avr/io.h>

#include "../STD/STD_TYPES.h"
#include "../STD/BIT_MATH.h"

#include "DIO_interface.h"
#include "DIO_register.h"


void DIO_voidSetPinDirection(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8PinDirection)
{
	switch(copy_u8PinDirection)
	{
		case DIO_PIN_INPUT:
		switch(copy_u8Port)
		{
			case DIO_PORTA: CLR_BIT(DDRA, copy_u8Pin); break;
			case DIO_PORTB: CLR_BIT(DDRB, copy_u8Pin); break; 
			case DIO_PORTC: CLR_BIT(DDRC, copy_u8Pin); break;
			case DIO_PORTD: CLR_BIT(DDRD, copy_u8Pin); break; 
		}
		break;
		
		case DIO_PIN_OUTPUT:
		switch(copy_u8Port)
		{
			case DIO_PORTA: SET_BIT(DDRA, copy_u8Pin); break;
			case DIO_PORTB: SET_BIT(DDRB, copy_u8Pin); break;
			case DIO_PORTC: SET_BIT(DDRC, copy_u8Pin); break;
			case DIO_PORTD: SET_BIT(DDRD, copy_u8Pin); break;
		}
		break;
	}
}


void DIO_voidSetPinValue(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8PinValue)
{
	switch(copy_u8PinValue)
	{
		case DIO_PIN_LOW:
		switch(copy_u8Port)
		{
			case DIO_PORTA: CLR_BIT(PORTA, copy_u8Pin); break;
			case DIO_PORTB: CLR_BIT(PORTB, copy_u8Pin); break;
			case DIO_PORTC: CLR_BIT(PORTC, copy_u8Pin); break;
			case DIO_PORTD: CLR_BIT(PORTD, copy_u8Pin); break;
		}
		break;
		
		case DIO_PIN_HIGH:
		switch(copy_u8Port)
		{
			case DIO_PORTA: SET_BIT(PORTA, copy_u8Pin); break;
			case DIO_PORTB: SET_BIT(PORTB, copy_u8Pin); break;
			case DIO_PORTC: SET_BIT(PORTC, copy_u8Pin); break;
			case DIO_PORTD: SET_BIT(PORTD, copy_u8Pin); break;
		}
		break;
	}
}


void DIO_voidTogglePinValue(u8 copy_u8Port, u8 copy_u8Pin)
{
	switch(copy_u8Port)
	{
		case DIO_PORTA: TOG_BIT(PORTA, copy_u8Pin); break;
		case DIO_PORTB: TOG_BIT(PORTB, copy_u8Pin); break;
		case DIO_PORTC: TOG_BIT(PORTC, copy_u8Pin); break;
		case DIO_PORTD: TOG_BIT(PORTD, copy_u8Pin); break;
	}
}


u8 DIO_u8GetPinValue(u8 copy_u8Port, u8 copy_u8Pin)
{
	u8 local_u8PinValue = INVALID_OUTPUT;
	
	switch(copy_u8Port)
	{
		case DIO_PORTA: local_u8PinValue = GET_BIT(PINA, copy_u8Pin); break;
		case DIO_PORTB: local_u8PinValue = GET_BIT(PINB, copy_u8Pin); break;
		case DIO_PORTC: local_u8PinValue = GET_BIT(PINC, copy_u8Pin); break;
		case DIO_PORTD: local_u8PinValue = GET_BIT(PIND, copy_u8Pin); break;
	}
	
	return local_u8PinValue;
}


void DIO_voidGetPinValue(u8 copy_u8Port, u8 copy_u8Pin, u8* pu8PinValue)
{
	if (pu8PinValue == NULL) {return ;}

	switch(copy_u8Port)
	{
		case DIO_PORTA: *pu8PinValue = GET_BIT(PINA, copy_u8Pin); break;
		case DIO_PORTB: *pu8PinValue = GET_BIT(PINB, copy_u8Pin); break;
		case DIO_PORTC: *pu8PinValue = GET_BIT(PINC, copy_u8Pin); break;
		case DIO_PORTD: *pu8PinValue = GET_BIT(PIND, copy_u8Pin); break;
	}
}


void DIO_voidActivePinInternalPUR(u8 copy_u8Port, u8 copy_u8Pin)
{
	switch(copy_u8Port)
	{
		case DIO_PORTA: SET_BIT(PORTA, copy_u8Pin); break;
		case DIO_PORTB: SET_BIT(PORTB, copy_u8Pin); break;
		case DIO_PORTC: SET_BIT(PORTC, copy_u8Pin); break;
		case DIO_PORTD: SET_BIT(PORTD, copy_u8Pin); break;
	}
}



void DIO_voidSetPortDirection(u8 copy_u8Port, u8 copy_u8PortDirection)
{
	switch(copy_u8Port)
	{
		case DIO_PORTA: DDRA = copy_u8PortDirection; break;
		case DIO_PORTB: DDRB = copy_u8PortDirection; break;
		case DIO_PORTC: DDRC = copy_u8PortDirection; break;
		case DIO_PORTD: DDRD = copy_u8PortDirection; break;
	}
}


void DIO_voidSetPortValue(u8 copy_u8Port, u8 copy_u8PortValue)
{
	switch(copy_u8Port)
	{
		case DIO_PORTA: PORTA = copy_u8PortValue; break;
		case DIO_PORTB: PORTB = copy_u8PortValue; break;
		case DIO_PORTC: PORTC = copy_u8PortValue; break;
		case DIO_PORTD: PORTD = copy_u8PortValue; break;
	}
}