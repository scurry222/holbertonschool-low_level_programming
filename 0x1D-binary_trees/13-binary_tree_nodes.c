#include "binary_trees.h"

/**
* binary_tree_nodes - count all nodes starting from root
* @tree: pointer to root
*
* Return: addition of all nodes in the tree
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->right)
			 + binary_tree_nodes(tree->left) + 1);

	else
		return (0);
}
