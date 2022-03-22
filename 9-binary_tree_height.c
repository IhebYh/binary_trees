#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: is pointer to the root node of the tree to measure the height
 * @return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int left_height = tree_height(root->left);
    int right_height = tree_height(root->right);
    if (left_height >= right_height)
        return left_height + 1;
    else
        return right_height + 1;
}
