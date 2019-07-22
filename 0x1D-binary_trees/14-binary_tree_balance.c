#include "binary_trees.h"

/**
*
*
*
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t len_l, len_r, height;

	if (!tree)
		return (-1);

	if (!tree->left && !tree->right)
		return (0);

	len_l = binary_tree_height(tree->left);
	len_r = binary_tree_height(tree->right);

	if (len_l <= len_r)
		height = len_r;
	else
		height = len_l;

	return (height + 1);
}

/**
*
*
*
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_r, height_l;

	if (!tree)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);

	return (height_l - height_r);
}
