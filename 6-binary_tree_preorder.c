#include "binary_trees.h"

/**
 * binary_tree_preorder - checks if a node is a root
 * @tree: root of the binary tree
 * @func: the action to be done during traversal
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
