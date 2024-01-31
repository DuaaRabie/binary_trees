#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the root of the binary tree
 * Return: the height | 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height1, height2;

	if (tree == NULL)
		return (0);
	
	if (tree->left)
		height1 = binary_tree_height(tree->left);
	if (tree->right)
		height2 = binary_tree_height(tree->right);

	if (height1 > height2)
		return (++height1);
	else
		return (++height2);
}
