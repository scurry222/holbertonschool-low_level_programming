#include "binary_trees.h"

/**
* binary_tree_size - add all left and right nodes of a root in a tree
* @tree: root to start from
*
* Return: all left and right nodes root included
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r_size, l_size;

	if (!tree)
		return (0);

	r_size = binary_tree_size(tree->right);
	l_size = binary_tree_size(tree->left);

	return (r_size + l_size + 1);
}

/**
* traverse_complete - check for completeness while traversing through
*			levels of the tree
* @tree: tree to check
* @index: index of node
* @size: amount of nodes in the tree
*
* Return: 1 if the tree is complete, 0 if not
*/
int traverse_complete(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (traverse_complete(tree->left, 2 * index + 1, size) &&
		traverse_complete(tree->right, 2 * index + 2, size));
}

/**
* binary_tree_is_complete - check if binary tree is complete
* @tree: pointer to root
*
* Return: 1 if tree is complete, 0 if not
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (traverse_complete(tree, 0, size));
}
