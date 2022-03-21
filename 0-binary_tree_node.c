#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent:(binary_tree_t) a pointer to a parent node of the node to create
 * @value:(int) the value toput in the new node
 * Return: binary_tree_t || NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_node *node = malloc(sizeof(binary_tree_node));

	if (!parent || !*parent)
		return (NULL);
	if (!node || !*node)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = *parent;
	return (node);
}
