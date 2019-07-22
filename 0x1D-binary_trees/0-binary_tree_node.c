#include "binary_trees.h"

/**
* binary_tree_node - create a binary tree node
* @parent: pointer to the node of the node to create
* @value: value to put in the new node
*
* Return: pointer to the new node, NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	new->n = value;
	new->right = NULL;
	new->left = NULL;
	new->parent = parent;

	return (new);
}
