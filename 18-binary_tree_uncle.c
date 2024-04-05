#include "binary_trees.h"

/**
 * binary_tree_uncle - will find the given node's uncle
 *
 * @node: pointer to node to find its uncle
 *
 * Return: pointer to uncle node, NULL if node is NULL or if there is no uncle
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	binary_tree_t *parent = node->parent;
	binary_tree_t *grandparent = parent->parent;

	if (grandparent->left == parent)
		return (grandparent->right);
	else
		return (grandparent->left);
}
