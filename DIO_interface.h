/*
 * DIO_interface.h
 *
 * Created: 1/20/2026 6:47:22 PM
 *  Author: Mazen Salem
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_


#define DIO_PORTA			0
#define DIO_PORTB			1
#define DIO_PORTC			2
#define DIO_PORTD			3


#define DIO_PORT_INPUT			0x00
#define DIO_PORT_OUTPUT			0xFF


#define DIO_PIN_INPUT			0
#define DIO_PIN_OUTPUT			1


#define DIO_PIN0			0
#define DIO_PIN1			1
#define DIO_PIN2			2
#define DIO_PIN3			3
#define DIO_PIN4			4
#define DIO_PIN5			5
#define DIO_PIN6			6
#define DIO_PIN7			7


#define DIO_PIN_LOW			0                                   
#define DIO_PIN_HIGH		1

#define INVALID_OUTPUT		255


void DIO_voidSetPinDirection(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8PinDirection);
void DIO_voidSetPinValue(u8 copy_u8Port, u8 copy_u8Pin, u8 copy_u8PinValue);
void DIO_voidTogglePinValue(u8 copy_u8Port, u8 copy_u8Pin);
u8 DIO_u8GetPinValue(u8 copy_u8Port, u8 copy_u8Pin);
void DIO_voidGetPinValue(u8 copy_u8Port, u8 copy_u8Pin, u8* pu8PinValue);
void DIO_voidActivePinInternalPUR(u8 copy_u8Port, u8 copy_u8Pin);



void DIO_voidSetPortDirection(u8 copy_u8Port, u8 copy_u8PortDirection);
void DIO_voidSetPortValue(u8 copy_u8Port, u8 copy_u8PortValue);
void DIO_voidTogglePortValue(u8 copy_u8Port);
void DIO_voidGetPortValue(u8 copy_u8Port, u8* pu8PortValue);
void DIO_voidActivePortInternalPUR(u8 copy_u8Port);


#endif /* DIO_INTERFACE_H_ */