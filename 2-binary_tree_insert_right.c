#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert right child node
 * @parent: the parent to insert to
 * @value: the value to store in the left child node
 * Return: binary tree node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right, *old_right;

	if (parent == NULL)
		return (NULL);

	new_right = binary_tree_node(parent, value);
	if (new_right == NULL)
		return (NULL);

	if (parent->right == NULL)
		parent->right = new_right;
	else
	{
		old_right = parent->right;
		parent->right = new_right;
		new_right->right = old_right;
		old_right->parent = new_right;
	}
	return (new_right);
}
