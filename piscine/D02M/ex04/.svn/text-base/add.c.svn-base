/**
 *
 *
 *
 *
 *
 */

#include "castmania.h"

#define ABS(x) ((x) > 0 ? (x) : (-x))

int normal_add(int a, int b) {
	return a + b;
}

int absolute_add(int a, int b) {
	return ABS(a) + ABS(b);
}

void exec_add(t_add *operation) {
	if (operation->add_type == NORMAL) {
		operation->add_op.res = normal_add(operation->add_op.a, operation->add_op.b);
	}
	else if (operation->add_type == ABSOLUTE) {
		operation->add_op.	res = absolute_add(operation->add_op.a, operation->add_op.b);
	}
}
