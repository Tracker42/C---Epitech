/**
 *
 *
 *
 *
 *
 */

#include "func_ptr.h"

void print_normal(char *str) {
	printf("%s\n", str);
}

void print_reverse(char *str) {
	char *cpy = strdup(str);
	int len = strlen(cpy);
	if(cpy) {
		int i;
		for(i = 0; i < len / 2; i++) {
			cpy[i] = str[len - i - 1];
			cpy[len - i - 1] = str[i];
		}
	}
	print_normal(cpy);
	free(cpy);
}

void print_upper(char *str) {
	char *cpy = strdup(str);
	int len = strlen(cpy);
	if(cpy) {
		int i;
		for(i = 0; i < len; i++) {
			cpy[i] = toupper(cpy[i]);
		}
	}
	print_normal(cpy);
	free(cpy);
}

void print_42(char *str) {
	char *plop = str;
	str = plop;
	print_normal("42");
}

void do_action(t_action action, char *str) {
	t_action_func list[] = {
		{PRINT_NORMAL, &print_normal},
		{PRINT_REVERSE, &print_reverse},
		{PRINT_UPPER, &print_upper},
		{PRINT_42, &print_42},
	};
	int i;
	for(i = 0; i < 4; i++) {
		if (action == list[i].action) {
			(*list[i].func)(str);
			return;
		}
	}
}
