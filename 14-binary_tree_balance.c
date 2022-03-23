#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check node leaf or not
 * @node: node to check
 * Return: 1 if node if leaf 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure
 * Return:int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t t_left, t_right;

	if (tree == NULL || binary_tree_is_leaf(tree) == 1)
		return (0);
	t_left = binary_tree_balance(tree->left);
	t_right = binary_tree_balance(tree->right);
	if (t_left >= t_right)
		return (t_left - t_right);
	return (t_right - t_left);
}
