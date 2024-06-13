
#include <stdint.h>
#include"stm32f4xx.h"
#define GPIOAEN (1U<<0)
#define UART2EN (1U<<17)

#define SYS_FREQ 16000000
#define APB1_CLK SYS_FREQ
#define UART_BAUDRATE 115200
#define CR1_TE  (1U<<3)
#define CR1_UE  (1U<<13)

#define SR_TXE  (1U<<7)

void uart2_tx_init(void);
void uart2_write(int ch);
static void uart_set_baudrate(USART_TypeDef *USARTx,uint32_t PeriphClk,uint32_t Baudrate);

static uint16_t compute_uart_bd(uint32_t PeriphClk,uint32_t Baudrate);

int main(void)
{

	uart2_tx_init();
	while(1)
	{
		uart2_write('A');
	}


}
void uart2_tx_init(void)
{
	RCC->AHB1ENR |=GPIOAEN;
	GPIOA->MODER &=~(1U <<4);
	GPIOA->MODER |= (1U <<5);
	GPIOA->AFR[0] |=(1U<<8);
	GPIOA->AFR[0] |=(1U<<9);
	GPIOA->AFR[0] |=(1U<<10);
	GPIOA->AFR[0] &=~(1U<<11);

	RCC->APB1ENR |=UART2EN;
uart_set_baudrate(USART2,APB1_CLK,UART_BAUDRATE);
USART2->CR1 =CR1_TE;
USART2->CR1 |=CR1_UE;

}
static uint16_t compute_uart_bd(uint32_t PeriphClk,uint32_t Baudrate)
		{
	return ((PeriphClk+(Baudrate/2U))/Baudrate);
		}

void uart2_write(int ch)
{
	// make sure the transmit data register is empty
	//while(!(*USART2_SR  & 0x0080)){}
	// write to transmit data register
	//*USART2_DR =(ch&0XFF) ;
	while(!(USART2->SR  & SR_TXE)){}
	USART2->DR =(ch&0XFF) ;
}
static void uart_set_baudrate(USART_TypeDef *USARTx,uint32_t PeriphClk,uint32_t Baudrate)
{
USARTx->BRR =compute_uart_bd(PeriphClk,Baudrate);
}
