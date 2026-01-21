/*
 * EEPROM_interface.h
 *
 *  Created on: Jan 3, 2026
 *      Author: Rehab
 */

#ifndef EEPROM_INTERFACE_H_
#define EEPROM_INTERFACE_H_

void EEPROM_voidInit     (void);
void EEPROM_voidWriteByte(u16 copy_u16WordAdd, u8 copy_u8Data);
void EEPROM_voidReadByte (u16 copy_u16WordAdd, u8* copy_pu8Data);
void EEPROM_voidWritePage(u16 copy_u16BaseAdd, u8 copy_u8DataLength,u8 *copy_u8DataArray);
void EEPROM_voidReadPage (u16 copy_u16BaseAdd, u8 copy_u8DataLength,u8 *copy_u8DataArray);

#endif /* EEPROM_INTERFACE_H_ */
