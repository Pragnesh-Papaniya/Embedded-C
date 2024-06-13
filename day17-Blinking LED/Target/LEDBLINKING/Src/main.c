
#include <stdint.h>

void delay(void)
{
	for(uint32_t i=0; i<300000;i++);
}
int main(void)
{
	uint32_t *AHB1ENR  =(uint32_t*)0x40023830;
	//uint32_t *MODER  =(uint32_t*)0x40020000;
	uint32_t *MODER  =(uint32_t*)0x40020800;

	uint32_t *ODR  =(uint32_t*)0x40020814;


	//*AHB1ENR |=0x04;
	*AHB1ENR |=(1<<2);
	//
	//*MODER &=0xFFFFF3FF;
//create a mask value
	*MODER &=0xFFFF0000;

	*MODER |=0x00005555;

	while(1)
	{
	*ODR|=0xFF;
delay();
	*ODR&=0x00;
	delay();
	}
	for(;;);
}
