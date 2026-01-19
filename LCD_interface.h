/*
 * smarthome_project.c
 *
 * Created: 1/19/2026 12:08:00 PM
 * Author : Alaa
 */
#ifndef LCD_INTERFACE_H_
#define LCD_INTERFACE_H_

void LCD_voidInit();
void LCD_voidDisplayChar(u8 copy_u8Data);
void LCD_voidSendCommand(u8 copy_u8Cmnd);
void LCD_voidDisplayString(u8* copy_Pu8String);
void LCD_voidDisplayNumber(u32 copy_u32Number);
void LCD_voidClear();
void LCD_voidShift(u8 copy_u8ShifttingDirection);
void LCD_voidGoToSpecificPosition(u8 copy_u8LineNumber,u8 copy_u8Position);

#define SHIFT_CURSOR_LEFT    0
#define SHIFT_CURSOR_RIGHT   1
#define SHIFT_DISPLAY_LEFT   2
#define SHIFT__DISPLAY_RIGHT 3

#endif /* LCD_INTERFACE_H_ */

