/*

 DCM_interface.h
 Created on: Jan 29, 2026
 Author: Gasser Nabil
 
*/

#ifndef DCM_INTERFACE_H_
#define DCM_INTERFACE_H_

void DCM_voidInit(u8 copy_u8MotorId);/* initialize pins direction to operate motor */
void DCM_voidOn(u8 copy_u8MotorId,u8 copy_u8MotorDirection);/* control pins value to turn on and change direction of motor */
void DCM_voidOff(u8 copy_u8MotorId);/* control pins value to turn off motor */
void DCM_voidInitWithCtrlSpeed(u8 copy_u8MotorId);/* initialize enable pins to be pulse width modulated */
void DCM_voidOnwithCtrlSpeed(u8 copy_u8MotorId,u8 copy_u8MotorDirection,u8 copy_u8MotorSpeed);/* control motor speed by applying duty cycle on enable pin */
void DCM_voidOffwithCtrlSpeed();/* stop pulse width modulation on enable pin */

#define DCM_MOTORA                      0
#define DCM_MOTORB                      1

#define DCM_ROTATE_CLOCKWISE            0
#define DCM_ROTATE_COUNTERCLOCKWISE     1


#endif /* DCM_INTERFACE_H_ */
