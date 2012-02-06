/**
 *
 *
 *
 *
 */

#include "queue.h"

unsigned int queue_get_size(t_queue queue) {
	return list_get_size(queue);
}

t_bool queue_is_empty(t_queue queue) {
	return list_is_empty(queue);
}

t_bool queue_push(t_queue *queue_ptr, void *elem) {
	return list_add_elem_at_back(queue_ptr, elem);
}

t_bool queue_pop(t_queue *queue_ptr) {
	return list_del_elem_at_front(queue_ptr);
}

void *queue_front(t_queue queue) {
	return list_get_elem_at_front(queue);
}
