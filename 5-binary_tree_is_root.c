#include "binary_trees.h"
/**
 *binary_tree_is_root- chek if is root
 *@node: node
 *Return: if is root 1 or 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
