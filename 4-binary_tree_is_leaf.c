#include "binary_trees.h"
/**
 *binary_tree_is_leaf - Check if a node is leaf
 *@node: node
 *Return: 0 or 1 not is / is
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!(node->left || node->right))
		return (1);
	return (0);
}
