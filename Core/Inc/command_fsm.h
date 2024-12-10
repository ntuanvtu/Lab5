/*
 * command_fms.h
 *
 *  Created on: Dec 10, 2024
 *      Author: ngoct
 */

#ifndef INC_COMMAND_FMS_H_
#define INC_COMMAND_FMS_H_

#include "main.h"
#include "timer.h"


extern  char INDEX;
extern  char signal;
extern char line_of_command[50];

void command_parser_fsm();

#endif /* INC_COMMAND_FMS_H_ */
