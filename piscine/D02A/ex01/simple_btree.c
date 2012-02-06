/**
 *
 *
 *
 *
 *
 */

#include <stdlib.h>
#include <limits.h>
#include "simple_btree.h"

#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))

t_bool btree_is_empty(t_tree tree) {
	if (tree) {
		return FALSE;
	}
	return TRUE;
}

unsigned int btree_get_size(t_tree tree) {
	if (tree) {
		return btree_get_size(tree->left) + btree_get_size(tree->right) + 1;
	}
	return 0;
}

unsigned int btree_get_depth(t_tree tree) {
	if (tree) {
		return MAX(btree_get_depth(tree->left), btree_get_depth(tree->right)) + 1;
	}
	return 0;
}

t_bool btree_create_node(t_tree* root_ptr, double value) {
	if (!(*root_ptr = malloc(sizeof(t_tree)))) {
		return FALSE;
	}
	(*root_ptr)->value = value;
	(*root_ptr)->left = NULL;
	(*root_ptr)->right = NULL;
	return TRUE;
}

t_bool btree_delete(t_tree* root_ptr) {
	if (*root_ptr) {
		btree_delete(&(*root_ptr)->left);
		btree_delete(&(*root_ptr)->right);
		*root_ptr = NULL;
		return TRUE;
	}
	return FALSE;
}

t_bool btree_get_max_value_2(t_tree tree, double *max) {
	if (tree) {
		*max = MAX(*max, tree->value);
		double temp = *max;
		if (btree_get_max_value_2(tree->left, &temp) == TRUE) {
			*max = MAX(*max, temp);
		}
		if (btree_get_max_value_2(tree->right, &temp) == TRUE) {
			*max = MAX(*max, temp);
		}
		return TRUE;
	}
	return FALSE;
}

double btree_get_max_value(t_tree tree) {
	if (tree) {
		double max = tree->value;
		btree_get_max_value_2(tree, &max);
		return max;
	}
	return 0;
}

t_bool btree_get_min_value_2(t_tree tree, double *min) {
	if (tree) {
		*min = MIN(*min, tree->value);
		double temp = *min;
		if (btree_get_min_value_2(tree->left, &temp) == TRUE) {
			*min = MIN(*min, temp);
		}
		if (btree_get_min_value_2(tree->right, &temp) == TRUE) {
			*min = MIN(*min, temp);
		}
		return TRUE;
	}
	return FALSE;
}

double btree_get_min_value(t_tree tree) {
	if (tree) {
		double min = tree->value;
		btree_get_min_value_2(tree, &min);
		return min;
	}
	return 0;
}
