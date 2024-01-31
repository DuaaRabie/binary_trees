#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor
 * 			of a binary tree
 * @tree: the root of the binary tree
 * Return: balance factor | 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int heightL = 0, heightR = 0;

	if (tree == NULL)
		return (0);
	
	heightL = binary_tree_height(tree->left);
	heightR = binary_tree_height(tree->right);

	return (heightL - heightR);
}
