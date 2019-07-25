#include "binary_trees.h"

/**
* binary_tree_rotate_left - a function that performs a left-rotation on
*				 a binary tree
* @tree: pointer to the root node
*
* Return: pointer to new root node, NULL on failure
*/


binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *parent = NULL;

	if (!tree || !tree->right)
		return (NULL);

	temp = tree;
	parent = tree->parent;
	tree = tree->right;
	tree->parent = NULL;

	if (tree->left)
	{
		temp->right = tree->left;
		tree->left->parent = temp;
	}
	else
		temp->right = NULL;
	temp->parent = tree;
	tree->left = temp;

	if (parent)
		parent->right = tree;

	tree->parent = parent;
	return (tree);
}
