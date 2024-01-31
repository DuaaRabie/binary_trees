#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the nodes of a binary tree
 * @tree: the root of the binary tree
 * Return: number of nodes | 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	nodes += binary_tree_nodes(tree->left);
	if (tree->left || tree->right)
		nodes++;
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
