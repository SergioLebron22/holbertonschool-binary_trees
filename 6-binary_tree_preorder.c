#include "binary_trees.h"

/**
 * binary_tree_preorder - will traverse the tree in pre-order
 *
 * @tree: binary tree being traversed
 * @func: function pointer
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
