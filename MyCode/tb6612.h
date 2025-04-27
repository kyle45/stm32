#ifndef __TB6612_H
#define __TB6612_H

#define Ain1_Set   	    HAL_GPIO_WritePin (GPIOA,GPIO_PIN_1,GPIO_PIN_SET)
#define Ain1_ReSet   	HAL_GPIO_WritePin (GPIOA,GPIO_PIN_1,GPIO_PIN_RESET)

#define Ain2_Set   	    HAL_GPIO_WritePin (GPIOA,GPIO_PIN_2,GPIO_PIN_SET)
#define Ain2_ReSet   	HAL_GPIO_WritePin (GPIOA,GPIO_PIN_2,GPIO_PIN_RESET)
   
#define PWM_A           htim2      

#define PWM_A_CH        TIM_CHANNEL_1

void tb6612_Init (unsigned char Compare);// 10

void motor_go_work (unsigned char dir,unsigned char Compare);

void motor_break();

void motor_stop();

#include "main.h"
#include "tim.h"
#endif

