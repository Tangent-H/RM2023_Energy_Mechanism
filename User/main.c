#include "stm32f10x.h" // Device header
#include "led.h"
#include "infrared.h"
#include "Delay.h"
#include "rand.h"


int main(void)
{
	IR_Init();
	rand_init();
	LED_Init(RedState);	
	while (1)
	{
		Delay_ms(100);
		while(!ws2812b_IsReady());
		LED_Update();
	}
}
