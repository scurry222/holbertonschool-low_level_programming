#include "binary_trees.h"

/**
* binary_tree_node - create a binary tree node
* @parent: pointer to the node of the node to create
* @value: value to put in the new node
*
* Return: pointer to the new node, NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->left = parent->left;
	parent->left = new;
	new->n = value;
	new->right = NULL;
	new->parent = parent;

	if (new->left)
		new->left->parent = new;

	return (new);
}
