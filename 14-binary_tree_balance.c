#include "binary_trees.h"

/**
 * binary_tree_balance - will measure the balance factor of the tree
 *
 * @tree: pointer to the tree
 *
 * Return: 0 if tree is NULL, otherwise the balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		left_height = binary_tree_height(tree->left) + 1;
	}
	else
	{
		left_height = 1;
	}

	if (tree->right != NULL)
	{
		right_height = binary_tree_height(tree->right) + 1;
	}
	else
	{
		right_height = 1;
	}

	if (left_height > right_height)
	{
		return (left_height);
	}
	else
	{
		return (right_height);
	}
}
