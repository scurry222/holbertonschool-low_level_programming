#include "binary_trees.h"

/**
*
*
*
*
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
