/*
 * smarthome_project.c
 *
 * Created: 1/19/2026 12:08:00 PM
 * Author : Alaa
 */

#ifndef KPD_INTERFACE_H_
#define KPD_INTERFACE_H_

void KPD_voidInit();
void KPD_voidGetValue(u8* copy_Pu8ReturnedValue);

#define KPD_NOT_PRESSED    0Xff

#endif /* KPD_INTERFACE_H_ */
