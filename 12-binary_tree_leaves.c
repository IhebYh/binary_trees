#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves
 * in a binary tree
 * @tree: is a pointer to the root node of the tree to count
 * the number of the leaves
 * Return:size_t
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (leaves);
	if (tree->left != NULL)
		leaves++;
	if (tree->right != NULL)
		leaves++;

	return (leaves);
}
