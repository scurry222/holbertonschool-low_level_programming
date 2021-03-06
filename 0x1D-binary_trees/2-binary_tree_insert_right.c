#include "binary_trees.h"

/**
* binary_tree_insert_right - insert node to the right of the parent node
* @parent: pointer to the parent node
* @value: value to put in the new node
*
* Return: pointer to the new node, NULL on failure
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->right = parent->right;
	parent->right = new;
	new->n = value;
	new->left = NULL;
	new->parent = parent;

	if (new->right)
		new->right->parent = new;

	return (new);
}
