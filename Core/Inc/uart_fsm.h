/*
 * uart_fsm.h
 *
 *  Created on: Dec 10, 2024
 *      Author: ngoct
 */

#ifndef INC_UART_FSM_H_
#define INC_UART_FSM_H_


#include "main.h"
#include "timer.h"
#include "command_fsm.h"


extern uint8_t buffer_flag;
extern uint8_t temp ;

extern int ADC_value;

void uart_communiation_fsm();


#endif /* INC_UART_FSM_H_ */
