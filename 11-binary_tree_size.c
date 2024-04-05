#include "binary_trees.h"

/**
 * binary_tree_size - will count the depth from the node passed
 *
 * @node: pointer to root node
 *
 * Return: depth, 0 if tree is NULL
*/

size_t binary_tree_size(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	return (1 + binary_tree_size(node->left) + binary_tree_size(node->right));
}
