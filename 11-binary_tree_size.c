#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the root of the binary tree
 * Return: the size | 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size += binary_tree_size(tree->left);
	size++;
	size += binary_tree_size(tree->right);

	return (size);
}
