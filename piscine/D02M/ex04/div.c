/**
 *
 *
 *
 *
 */

#include "castmania.h"

int integer_div(int a, int b) {
	if(b) {
		return a / b;
	}
	return 0;
}

float decimale_div(int a, int b) {
	if(b) {
		return a / (float) b;
	}
	return 0;
}

void exec_div(t_div *operation) {
	if(operation->div_type == INTEGER) {
		((t_integer_op *) operation->div_op)->res = integer_div(((t_integer_op *) operation->div_op)->a, ((t_integer_op *) operation->div_op)->b);
	}
	else if(operation->div_type == DECIMALE) {
		((t_decimale_op *) operation->div_op)->res = decimale_div(((t_decimale_op *) operation->div_op)->a, ((t_decimale_op *) operation->div_op)->b);
	}
}
