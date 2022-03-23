#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent:(binary_tree_t) a pointer to a parent node of the node to create
 * @value:(int) the value toput in the new node
 * Return: binary_tree_t || NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
