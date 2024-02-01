#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: tree to be check
 * Return: 1 if full | otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int result1, result2;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		result1 = binary_tree_is_full(tree->left);
		result2 = binary_tree_is_full(tree->right);
		if (result1 || result2)
			return (0);
		else
			return (1);
	}
	return (0);
}
