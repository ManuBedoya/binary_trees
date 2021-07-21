#include "binary_trees.h"

/**
 *binary_tree_insert_left - create left-child
 *@parent: Parent of the new child
 *@value: Value of the new node
 *Return: NULL if fails or parent is null or the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!parent || !new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;

	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
