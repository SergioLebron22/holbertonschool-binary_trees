#include "binary_trees.h"

/**
 * binary_tree_is_root - will check if a given node is a root
 *
 * @node: node being checked
 *
 * Return: 1 if node is root, 0 if NULL
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	return (node->parent == NULL);
}
