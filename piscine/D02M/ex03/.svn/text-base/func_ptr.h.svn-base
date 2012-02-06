/**
 *
 *
 *
 *
 *
 */

#ifndef __FUNC_PTR_H__
#define __FUNC_PTR_H__

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "func_ptr_enum.h"

typedef void (*t_func)(char *str);

typedef struct s_action_func {
	t_action action;
	t_func func;
} t_action_func;

void print_normal(char *str);
void print_reverse(char *str);
void print_upper(char *str);
void print_42(char *str);
void do_action(t_action action, char *str);

#endif
