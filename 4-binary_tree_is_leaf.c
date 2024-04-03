#include "binary_trees.h"

/**
 * binary_tree_is_leaf - will check if the node being passed as arg is a leaf
 *
 * @node: node being checked
 *
 * Return: 1 if true, else 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
