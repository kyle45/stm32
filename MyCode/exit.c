#include "stm32f1xx_it.h"
#include "stm32f1xx_hal.h"
#include "tb6612.h"

void EXIT2_IRQHandler(void)
{
		HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_2);

}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if(GPIO_Pin == GPIO_PIN_12)
	{
		motor_stop();
	}
}
