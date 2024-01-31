#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the root of the binary tree
 * Return: the height | 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height1 = 0, height2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		height1++;
		height1 += binary_tree_height(tree->left);
		height1 += binary_tree_height(tree->right);
		if (tree->parent == NULL)
			return (height1 - 1);
		else
			return (height1);
	}
	
	if (tree->right)
	{
		height2++;
		height2 += binary_tree_height(tree->right);
		height2 += binary_tree_height(tree->left);
		if (tree->parent == NULL)
			return (height2 - 1);
		else
			return (height2);
	}

	if (height1 > height2)
		return (height1);
	return (height2);
}
