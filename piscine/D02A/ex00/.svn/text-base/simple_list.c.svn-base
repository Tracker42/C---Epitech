/**
 *
 *
 *
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include "simple_list.h"

unsigned int list_get_size(t_list list) {
	unsigned int size = 0;
	while (list) {
		size++;
		list = list->next;
	}
	return size;
}

t_bool list_is_empty(t_list list) {
	if (list) {
		return FALSE;
	}
	return TRUE;
}

void list_dump(t_list list) {
	while (list) {
		printf("%f\n", list->value);
		list = list->next;
	}
}

t_node *list_create_node(double element) {
	t_node *node = malloc(sizeof(t_node));
	node->value = element;
	node->next = NULL;
	return node;
}

t_bool list_add_elem_at_front(t_list *front_ptr, double elem) {
	t_node *node = list_create_node(elem);
	if (!node) {
		return FALSE;
	}
	node->next = *front_ptr;
	*front_ptr = node;
	return TRUE;
}

t_bool list_add_elem_at_back(t_list* front_ptr, double elem) {
	t_node *node = list_create_node(elem);
	t_list list = *front_ptr;
	if (!node) {
		return FALSE;
	}
	if (!list) {
		*front_ptr = node;
	}
	else {
		list = *front_ptr;
		while (list->next) {
			list = list->next;
		}
		list->next = node;
	}
	return TRUE;
}

t_bool list_add_elem_at_position(t_list* front_ptr, double elem, unsigned int position) {
	if (position == 0) {
		return list_add_elem_at_front(front_ptr, elem);
	}
	if (!*front_ptr) {
		return FALSE;
	}
	t_list list = *front_ptr;
	while (--position) {
		list = list->next;
		if (!list) {
			return FALSE;
		}
	}
	t_node *node = list_create_node(elem);
	if (!node) {
		return FALSE;
	}
	node->next = list->next;
	list->next = node;
	return TRUE;
}

t_bool list_del_elem_at_front(t_list* front_ptr) {
	t_list list = *front_ptr;
	if (!list) {
		return FALSE;
	}
	*front_ptr = list->next;
	free(list);
	return TRUE;
}

t_bool list_del_elem_at_back(t_list* front_ptr) {
	t_list list = *front_ptr;
	t_list previous = NULL;
	if (!list) {
		return FALSE;
	}
	while (list->next) {
		previous = list;
		list = list->next;
	}
	if (previous) {
		previous->next = NULL;
	}
	else {
		*front_ptr = NULL;
	}
	free(list);
	return TRUE;
}

t_bool list_del_elem_at_position(t_list* front_ptr, unsigned int position) {
	if (position == 0) {
		printf("front\n");
		return list_del_elem_at_front(front_ptr);
	}
	if (!*front_ptr) {
		return FALSE;
	}
	t_list previous = *front_ptr;
	t_list list = previous->next;
	while (--position) {
		if (!list) {
			return FALSE;
		}
		previous = list;
		list = list->next;
	}
	if (list) {
		previous->next = list->next;
	}
	free(list);
	return TRUE;
}

double list_get_elem_at_front(t_list list) {
	if (!list) {
		return 0;
	}
	return list->value;
}

double list_get_elem_at_back(t_list list) {
	if (!list) {
		return 0;
	}
	while (list->next) {
		list = list->next;
	}
	return list->value;
}

double list_get_elem_at_position(t_list list, unsigned int position) {
	if (!list) {
		return 0;
	}
	while (position--) {
		list = list->next;
		if (!list) {
			return 0;
		}
	}
	return list->value;
}

t_node *list_get_first_node_with_value(t_list list, double value) {
	while (list) {
		if (list->value == value) {
			return list;
		}
		list = list->next;
	}
	return NULL;
}
