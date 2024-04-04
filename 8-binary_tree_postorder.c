#include "binary_trees.h"

/**
 * binary_tree_postorder - will go through the binary in postorder traversal
 *
 * @tree: tree being traversed
 * @func: function pointer
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
