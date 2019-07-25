#include "binary_trees.h"

/**
* binary_tree_postorder - set tree in postorder format
* @tree: pointer to tree to set
* @func: function to run on tree data
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);

	binary_tree_postorder(tree->right, func);

	func(tree->n);

}
