/******************** (C) COPYRIGHT 2019 青风电子 ********************
 * 文件名  ：main
 * 出品论坛  ：qfv8.com         
 * 实验平台：青云nRF528xx蓝牙开发板
 * 描述    ：led点灯实例
 * 作者    ：青风
 * 店铺    ：qfv5.taobao.com
**********************************************************************/


#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "nrf_gpio.h"
#include "led.h"


/**
 * @brief Function for application main entry.
 */
int main(void)
{
  // 初始化GPIO
  LED_Init();
  
  // LED 0 and LED 1 blink alternately.
  while(true)
  {
    LED1_Open();//开led1灯
    LED2_Close();
    LED3_Close();
		LED4_Close();
    nrf_delay_ms(500);
		
		LED1_Close();
    LED2_Open();//开LED2灯
    LED3_Close();
		LED4_Close();
    nrf_delay_ms(500);
		
    LED1_Close();
    LED2_Close();  
    LED3_Open();//开LED3灯
//		LED4_Close();
    nrf_delay_ms(500);
		
		LED1_Close();
		LED2_Close();   
    LED3_Close();
		LED4_Open();
    nrf_delay_ms(500);	
		
  }
}

