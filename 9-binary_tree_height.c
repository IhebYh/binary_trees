#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a function that checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: 1 || 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL || node->right == NULL)
		return (1);
	return (0);
}
/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: is pointer to the root node of the tree to measure the height
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
		
	return (right_height + 1);
}
