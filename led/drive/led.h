#ifndef __LED_H
#define	__LED_H

#include "nrf52.h"

#define LED_START      17
#define LED_0          17
#define LED_1          18
#define LED_2          19
#define LED_3          20
#define LED_STOP       20

void LED_Init(void);
void LED1_Open(void);
void LED1_Close(void);
void LED1_Toggle(void);
void LED2_Open(void);
void LED2_Close(void);
void LED2_Toggle(void);
void LED3_Open(void);
void LED3_Close(void);
void LED3_Toggle(void);
void LED4_Open(void);
void LED4_Close(void);
void LED4_Toggle(void);


#endif /* __LED_H */

