/**
 *
 *
 *
 *
 *
 */

#include "stack.h"

unsigned int stack_get_size(t_stack stack) {
	return list_get_size(stack);
}

t_bool stack_is_empty(t_stack stack) {
	return list_is_empty(stack);
}

t_bool stack_push(t_stack *stack_ptr, void* elem) {
	return list_add_elem_at_front(stack_ptr, elem);
}

t_bool stack_pop(t_stack *stack_ptr) {
	return list_del_elem_at_front(stack_ptr);
}

void *stack_top(t_stack stack) {
	return list_get_elem_at_front(stack);
}
