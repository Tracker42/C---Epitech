/**
 *
 *
 *
 *
 *
 */

#include <stdlib.h>
#include "tree_traversal.h"

t_bool tree_is_empty(t_tree tree) {
	if (tree) {
		return FALSE;
	}
	return TRUE;
}

void tree_node_dump(t_tree_node *tree_node, t_dump_func dump_func) {
	(*dump_func)(tree_node->data);
}

t_bool init_tree(t_tree *tree_ptr, void *data) {
	t_tree tree = malloc(sizeof(t_tree_node));
	if (!tree) {
		return FALSE;
	}
	*tree_ptr = tree;
	tree->data = data;
	tree->parent = NULL;
	tree->children = NULL;
	return TRUE;
}

t_tree_node *tree_add_child(t_tree_node* tree_node, void* data) {
	if (!tree_node) {
		return NULL;
	}
	t_tree tree;
	init_tree(&tree, data);
	tree->parent = tree_node;
	list_add_elem_at_back(&tree_node->children, tree);
	return tree;
}

t_bool tree_destroy(t_tree* tree_ptr) {
	if (!*tree_ptr) {
		return FALSE;
	}
	while ((*tree_ptr)->children) {
		t_tree tree = list_get_elem_at_front((*tree_ptr)->children);
		tree_destroy(&tree);
		list_del_elem_at_front(&(*tree_ptr)->children);
	}
	free(*tree_ptr);
	*tree_ptr = NULL;
	return TRUE;
}

void tree_traversal(t_tree tree, t_container* container, t_dump_func dump_func) {
	if (tree) {
		do {
			(*dump_func)(tree->data);
			t_list children = tree->children;
			while (children) {
				(*container->push_func)(container->container, children->value);
				children = children->next;
			}
			tree = (*container->pop_func)(container->container);
		}
		while (tree);
	}
}
