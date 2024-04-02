#include "binary_trees.h"

/**
 * binary_tree_node - creates a node for the binary tree
 *
 * @parent: pointer to parent node
 * @value: value of the new node
 *
 * Return: pointer to new node, else NULL
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;

	return (new_node);
}
