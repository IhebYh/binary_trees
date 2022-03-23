#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as
 * the left-child of another node
 * @parent: (binary_tree_t) a pointer to thenode to insert
 * @value: (int) the value to store in thenew node
 * Return: pointer to the new node || node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_node_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, node);

	if (node == NULL)
		return (NULL);

	node->right = parent->right;
	if (node->right != NULL)
	{
		node->right->parent = node;
	}
	parent->right = node;

	return (node);
}
