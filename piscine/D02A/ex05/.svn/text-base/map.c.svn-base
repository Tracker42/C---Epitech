/**
 *
 *
 *
 *
 *
 */

#include <stdlib.h>
#include "map.h"

unsigned int map_get_size(t_map map) {
	return list_get_size(map);
}

t_bool map_is_empty(t_map map) {
	return list_is_empty(map);
}

t_key_comparator key_cmp_container(t_bool store, t_key_comparator new_key_cmp) {
	static t_key_comparator cmp = NULL;
	if (store == TRUE) {
		cmp = new_key_cmp;
	}
	return cmp;
}

int pair_comparator(void* first, void* second) {
	return(*key_cmp_container(FALSE, NULL))(((t_pair *) first)->key, ((t_pair *) second)->key);
}

t_pair *map_create_pair(void *key, void* value) {
	t_pair *pair = malloc(sizeof(t_pair));
	pair->key = key;
	pair->value = value;
	return pair;
}

t_bool map_add_elem(t_map *map_ptr, void *key, void *value, t_key_comparator key_cmp) {
	key_cmp_container(TRUE, key_cmp);
	t_pair *pair = map_create_pair(key, value);
	t_node *node;
	if ((node = list_get_first_node_with_value(*map_ptr, pair, &pair_comparator))) {
		free(node->value);
		node->value = pair;
		return TRUE;
	}
	else {
		t_map map = *map_ptr;
		unsigned int position = 0;
		while (map && pair_comparator(map->value, pair) < 0) {
			position++;
			map = map->next;
		}
		return list_add_elem_at_position(map_ptr, pair, position);
	}
}

t_bool map_del_elem(t_map* map_ptr, void* key, t_key_comparator key_cmp) {
	key_cmp_container(TRUE, key_cmp);
	t_pair *pair = map_create_pair(key, NULL);
	t_node *node;
	node = list_get_first_node_with_value(*map_ptr, pair, &pair_comparator);
	free(pair);
	if (node) {
		free(node->value);
		list_del_node(map_ptr, node);
		return TRUE;
	}
	return FALSE;
}

void *map_get_elem(t_map map, void* key, t_key_comparator key_cmp) {
	key_cmp_container(TRUE, key_cmp);
	t_pair *pair = map_create_pair(key, NULL);
	t_node *node;
	node = list_get_first_node_with_value(map, pair, &pair_comparator);
	free(pair);
	if (node) {
		return ((t_pair *) node->value)->value;
	}
	return NULL;
}
