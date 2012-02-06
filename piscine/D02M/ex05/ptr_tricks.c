/**
 *
 *
 *
 *
 */

#include "ptr_tricks.h"

int get_array_nb_elem(int *ptr1, int *ptr2) {
	return (ptr2 - ptr1);
}

t_whatever *get_struct_ptr(int *member_ptr) {
	t_whatever base;
	return (void *) member_ptr - ((void *) &base.member - (void *) &base);
}
