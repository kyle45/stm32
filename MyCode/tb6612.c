#include "tb6612.h"

/**
  * @brief   tb6612初始化
  * @param   Compare 	    占空比 
  * @retval  无
  */

void tb6612_Init (unsigned char Compare)//  10
{
   HAL_TIM_PWM_Start (&PWM_A,PWM_A_CH);//定时器pwm输出
   __HAL_TIM_SET_COMPARE (&PWM_A, PWM_A_CH, Compare);    //修改比较值，修改占空比
}

/**
  * @brief   电机转动
  * @param   dir            方向  0~非0
  * @param   Compare 	    速度  1~99
  * @retval  无
  */

void motor_go_work (unsigned char dir,unsigned char Compare)
{
   __HAL_TIM_SET_COMPARE (&PWM_A, PWM_A_CH, Compare);    //修改比较值，修改占空比
	if(dir)
	{
		Ain1_Set;
		Ain2_ReSet;
	}
	else 
	{
		Ain1_ReSet;
	    Ain2_Set;
	}
}

/**
  * @brief   电机刹车
  * @retval  无
  */
void motor_break()
{
	Ain1_Set;
	Ain2_Set;
}



/**
  * @brief   电机停止运行
  * @retval  无
  */
void motor_stop()
{
	Ain1_ReSet;
	Ain2_ReSet;
}
