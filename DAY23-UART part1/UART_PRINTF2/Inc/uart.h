/*
 * uart.h
 *
 *  Created on: 02-Jun-2022
 *      Author: PANTECH
 */

#ifndef UART_H_
#define UART_H_
#include <stdint.h>
#define GPIOAEN (1U<<0)
#define UART2EN (1U<<17)
#define SYS_FREQ 16000000
#define APB1_CLK SYS_FREQ
#define UART_BAUDRATE 115200
void uart2_write(int ch);
void uart2_tx_init(void);
static uint16_t compute_uart_bd(uint32_t PeriphClk,uint32_t Baudrate);


#endif /* UART_H_ */
