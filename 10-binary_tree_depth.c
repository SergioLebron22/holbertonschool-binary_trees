#include "binary_trees.h"

/**
 * binary_tree_depth - will count the depth from the node passed
 *
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth, 0 if tree is NULL
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;
	const binary_tree_t *node = tree;

	if (tree == NULL)
		return (0);

	while (node->parent != NULL)
	{
		count++;
		node = node->parent;
	}

	return (count);
}
