#include "binary_trees.h"

/**
* binary_tree_height - count the amount of nodes high a tree is
* @tree: pointer to root of the tree
*
* Return: amount of nodes high
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t len_l, len_r, height;

	if (!tree)
		return (0);

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
* level_lowerer - run func function on level l
* @tree: pointer to tree
* @func: function to run on data in tree node
* @l: level to run function on
*/
void level_lowerer(const binary_tree_t *tree, void(*func)(int), size_t l)
{
	if (l == 1)
		func(tree->n);

	else
	{
		level_lowerer(tree->left, func, l - 1);
		level_lowerer(tree->right, func, l - 1);
	}
}

/**
* binary_tree_levelorder - go through a binary tree using level-order
*			 traversal
* @tree: tree to traverse
* @func: pointer to a function to call for each node
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t lvl = 0, max_lvl;

	if (!tree || !func)
		return;

	max_lvl = binary_tree_height(tree) + 1;

	while (lvl++ < max_lvl)
		level_lowerer(tree, func, lvl);
}
