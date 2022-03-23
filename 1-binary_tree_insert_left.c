#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as
 * the left-child of another node
 * @parent: (binary_tree_t) a pointer to thenode to insert
 * @value: (int) the value to store in thenew node
 * Return: pointer to the new node || node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);

	node->left = parent->left;
	if (node->left != NULL)
	{
		node->left->parent = node;
	}
	parent->left = node;

	return (node);
}
