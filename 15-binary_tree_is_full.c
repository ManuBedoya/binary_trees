#include "binary_trees.h"

/**
 *binary_tree_is_full - veriify if the tree is full
 *@tree: Node
 *Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);
	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}
