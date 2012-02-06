/**
 *
 *
 *
 *
 *
 */

#include <stdio.h>
#include "castmania.h"

void exec_add(t_add *operation);
void exec_div(t_div *operation);

void exec_operation(t_instruction_type instruction_type, void *data) {
	t_instruction *instr;
	if (instruction_type == ADD_OPERATION) {
		instr = (t_instruction *) data;
		exec_add(instr->operation);
		if (instr->output_type == VERBOSE) {
			printf("%i\n", ((t_add *) instr->operation)->add_op.res);
		}
	}
	else if (instruction_type == DIV_OPERATION) {
		instr = (t_instruction *) data;
		exec_div(instr->operation);
		if (instr->output_type == VERBOSE) {
			if (((t_div *) instr->operation)->div_type == INTEGER) {
				printf("%i\n", ((t_integer_op *) ((t_div *) instr->operation)->div_op)->res);
			}
			else {
				printf("%f\n", ((t_decimale_op *) ((t_div *) instr->operation)->div_op)->res);
			}
		}
	}
}

void exec_instruction(t_instruction_type instruction_type, void *data) {
	if (instruction_type == PRINT_INT) {
		printf("%i\n", (int) *((int *) data));
	}
	else if (instruction_type == PRINT_FLOAT) {
		printf("%f\n", (float) *((float *) data));
	}
	else {
		exec_operation(instruction_type, data);
	}
}
