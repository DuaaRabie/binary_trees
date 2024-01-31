#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the leaves of a binary tree
 * @tree: the root of the binary tree
 * Return: number of leaves | 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	leaves += binary_tree_leaves(tree->left);
	if (!(tree->left || tree->right))
		leaves++;
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
