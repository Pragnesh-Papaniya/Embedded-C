
#include <stdint.h>
#include "main.h"


void delay(void)
{
	for (volatile uint32_t i=0;i<300000;i++);
}

int main(void)
{
	/*uint32_t *portcAHB1ENR =(uint32_t*)0x40023830;
	uint32_t *portcMODER=(uint32_t*)0x40020800;
	uint32_t *portcODR=(uint32_t*)0x40020814;
	*portcAHB1ENR  |=0X04;
	*portcAHB1ENR  |=(1<<2);
	*portcMODER &= 0XFFFF0000;
	*portcMODER |= 0X00005555; */
	RCC_AHB1ENR_t volatile  *const AHB1ENR = (RCC_AHB1ENR_t*) 0x40023830;
	GPIOx_MODE_t  *MODER =(GPIOx_MODE_t*)0x40020800;
	GPIOx_ODR_t *ODR =(GPIOx_ODR_t*)0x40020814;

	GPIOx_MODE_t  *pAMODER =(GPIOx_MODE_t*)0x40020000;
	GPIOx_ODR_t *pAODR =(GPIOx_ODR_t*)0x40020014;

	AHB1ENR->gpioc_en=1;
	AHB1ENR->gpioa_en=1;

	pAMODER->pin_5=1;


	MODER->pin_0=1;
	MODER->pin_1=1;
	MODER->pin_2=1;
	MODER->pin_3=1;
	MODER->pin_4=1;
	MODER->pin_5=1;
	MODER->pin_6=1;
	MODER->pin_7=1;

	while(1)
	{
	ODR->pin_0_7=0xFF;
	pAODR->pin_0_7=0xFF;
	/*portcODR->pin_1=1;

	portcODR->pin_2=1;
	portcODR->pin_3=1;

	portcODR->pin_4=1;

	portcODR->pin_5=1;
	portcODR->pin_6=1;
	portcODR->pin_7=1;
	*/

	delay();
	ODR->pin_0_7=0X00;
	pAODR->pin_0_7=0X00;

	/*
	portcODR->pin_1=0;
	portcODR->pin_2=0;
	portcODR->pin_3=0;
	portcODR->pin_4=0;
	portcODR->pin_5=0;
	portcODR->pin_6=0;
	portcODR->pin_7=0;
*/
	delay();
	}
	/*

while(1)
{

	portcODR|=0x01;
	delay();
	for(uint32_t i =0; i<=7 ;i++)
	{
		*portcODR =(*portcODR<<1);
		delay();
	}

} */


}
