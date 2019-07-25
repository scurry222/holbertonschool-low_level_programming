#include "binary_trees.h"

/**
* binary_tree_depth - check how many levels up are in the tree
* @tree: pointer to node in the tree
*
* Return: amount of nodes up from position
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *temp = tree;

	if (!tree)
		return (0);

	while (temp->parent)
	{
		depth++;
		temp = temp->parent;
	}

	return (depth);
}
