#include "binary_trees.h"

/**
 *binary_tree_node - create left-child
 *@parent: Parent of the new child
 *@value: Value of the new node
 *Return: NULL if fails or parent is null or the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	return (new_node);
}
