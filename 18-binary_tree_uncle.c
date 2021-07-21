#include "binary_trees.h"
/**
 *binary_tree_uncle - Find the uncle
 *@node: Node
 *Return: the uncle of node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (!node->parent->parent)
		return (NULL);
	if (node->parent->parent->right == node->parent &&
	    node->parent->parent->left)
		return (node->parent->parent->left);
	if (node->parent->parent->left == node->parent &&
	    node->parent->parent->right)
		return (node->parent->parent->right);
	return (NULL);
}
