#include "binary_trees.h"

/**
 * binary_tree_is_perfect - will check if the tree is perfect
 *
 * @tree: pointer to the root of the tree to check
 *
 * Return: 1 if perfect, else 0 or if NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perfectLeft = 1, perfectRight = 1;

	if (tree == NULL)
		return (0);

	if (tree->left)
		perfectLeft = binary_tree_is_perfect(tree->left);

	if (tree->right)
		perfectRight = binary_tree_is_perfect(tree->right);

	if (binary_tree_is_full(tree) && !binary_tree_balance(tree))
		return (perfectLeft * perfectRight);

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
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise or if tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
