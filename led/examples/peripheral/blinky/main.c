/******************** (C) COPYRIGHT 2019 ������ ********************
 * �ļ���  ��main
 * ��Ʒ��̳  ��qfv8.com         
 * ʵ��ƽ̨������nRF528xx����������
 * ����    ��led���ʵ��
 * ����    �����
 * ����    ��qfv5.taobao.com
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
  // ��ʼ��GPIO
  LED_Init();
  
  // LED 0 and LED 1 blink alternately.
  while(true)
  {
    LED1_Open();//��led1��
    LED2_Close();
    LED3_Close();
		LED4_Close();
    nrf_delay_ms(500);
		
		LED1_Close();
    LED2_Open();//��LED2��
    LED3_Close();
		LED4_Close();
    nrf_delay_ms(500);
		
    LED1_Close();
    LED2_Close();  
    LED3_Open();//��LED3��
//		LED4_Close();
    nrf_delay_ms(500);
		
		LED1_Close();
		LED2_Close();   
    LED3_Close();
		LED4_Open();
    nrf_delay_ms(500);	
		
  }
}

