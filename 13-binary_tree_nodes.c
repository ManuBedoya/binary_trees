#include "binary_trees.h"

/**
 *binary_tree_nodes - counts node that have at least 1 child
 *@tree: node
 *Return: number of nodes that have at least 1 child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
