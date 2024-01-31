#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the root of the binary tree
 * Return: the height | 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
	{
		height += binary_tree_height(tree->left);
		if (tree)
			height++;
		height += binary_tree_height(tree->right);

	}
	if (tree->parent == NULL)
		return (height - 1);
	return (height);
}
