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

/**
* binary_trees_ancestor - find the lowest common ancestor of two nodes
* @first: pointer to the first node
* @second: pointer to the second node
*
* Return: pointer to lowest common ancestor
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					 const binary_tree_t *second)
{
	size_t depth_f, depth_s;

	if (!first || !second)
		return (NULL);

	depth_f = binary_tree_depth(first);
	depth_s = binary_tree_depth(second);

	while (depth_f > depth_s)
	{
		first = first->parent;
		depth_f--;
	}
	while (depth_s > depth_f)
	{
		second = second->parent;
		depth_s--;
	}
	while (first && second)
	{
		if (first == second)
			break;
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}
