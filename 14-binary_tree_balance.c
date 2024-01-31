#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: the root of the binary tree
 * Return: the height | 0
 */
size_t height(const binary_tree_t *tree)
{
	size_t height1, height2;

	if (tree == NULL)
		return (0);

	height1 = height(tree->left);
	height2 = height(tree->right);
	if (!(tree->left || tree->right))
	{
		height1--;
		height2--;
	}
	if (height1 > height2)
		return (++height1);
	else
		return (++height2);
}


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
	
	heightL = height(tree->left);
	heightR = height(tree->right);

	return (heightL - heightR);
}
