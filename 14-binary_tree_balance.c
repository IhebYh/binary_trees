#include "binary_trees.h"
/**
 * binary_treeHeight - a function that measures the height of a binary tree
 * @tree: is pointer to the root node of the tree to measure the height
 * Return: size_t
 */

int binary_treeHeight(const binary_tree_t *tree)
{
	int right_height, left_height;

	if (tree == NULL)
		return (0);

	left_height = binary_treeHeight(tree->left);
	right_height = binary_treeHeight(tree->right);

	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure
 * Return:int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_treeHeight(tree->left);
	right = binary_treeHeight(tree->right);
	return (left - right);
}
