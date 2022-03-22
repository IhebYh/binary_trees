#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures
 * the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return:size_t
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t depth = binary_tree_depth(tree->parent);

	return (depth);
}
