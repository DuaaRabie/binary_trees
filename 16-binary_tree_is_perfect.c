#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree to be check
 * Return: 1 if perfect | otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result1, result2;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	
	if (!tree->left || !tree->right)
		return (2);

	if (tree->left && tree->right)
	{
		result1 = binary_tree_is_perfect(tree->left);
		result2 = binary_tree_is_perfect(tree->right);
		if (result1 == 2 || result2 == 2)
			return (0);
		if (result1 && result2)
			return (1);
		if (!result1 && !result2)
			return (1);
		else
			return (0);
	}
	return (0);
}
