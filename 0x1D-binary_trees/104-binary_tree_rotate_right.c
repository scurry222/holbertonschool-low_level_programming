#include "binary_trees.h"

/**
* binary_tree_rotate_right - a function that performs a right-rotation on
*				 a binary tree
* @tree: pointer to the root node
*
* Return: pointer to new root node, NULL on failure
*/


binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *parent = NULL;

	if (!tree || !tree->left)
		return (NULL);

	temp = tree;
	parent = tree->parent;
	tree = tree->left;
	tree->parent = NULL;

	if (tree->right)
	{
		temp->left = tree->right;
		tree->right->parent = temp;
	}
	else
		temp->left = NULL;

	temp->parent = tree;
	tree->right = temp;

	if (parent)
		parent->left = tree;

	tree->parent = parent;
	return (tree);
}
