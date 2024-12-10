/*
 * timer.h
 *
 *  Created on: Dec 10, 2024
 *      Author: ngoct
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "main.h"

extern int timer0_flag;
extern int timer1_flag;

void timer_run();
void timer_run1();
void setTimer0(int duration);
void setTimer1(int duration);

#endif /* INC_TIMER_H_ */
