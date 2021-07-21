#include "binary_trees.h"
/**
 *binary_tree_sibling - find sibling
 *@node: Node
 *Return: The sibling of the node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if (node->parent->right == node && node->parent->left)
		return (node->parent->left);
	if (node->parent->left == node && node->parent->right)
		return (node->parent->right);
	return (NULL);
}
