#include "binary_trees.h"

/**
* binary_tree_preorder - set values of the binary tree in preorder format
* @tree: Pointer to tree to set
* @func: function to run on tree data
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
