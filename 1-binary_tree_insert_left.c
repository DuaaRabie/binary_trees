#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert left child node
 * @parent: the parent to insert to
 * @value: the value to store in the left child node
 * Return: binary tree node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left, *old_left;

	if (parent == NULL)
		return (NULL);

	new_left = binary_tree_node(parent, value);
	if (new_left == NULL)
		return (NULL);

	if (parent->left == NULL)
		parent->left = new_left;
	else
	{
		old_left = parent->left;
		parent->left = new_left;
		new_left->left = old_left;
		old_left->parent = new_left;
	}
	return (new_left);
}
