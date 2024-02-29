#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: node to calculate the depth of
 *
 * Return: depth of the node
 *         0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *node;

	if (!tree)
		return (0);

	node = (binary_tree_t *)tree;
	while (tree->parent)
	{
		depth++;
		node = node->parent;
	}
	return (depth);
}
