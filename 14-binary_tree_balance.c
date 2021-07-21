#include "binary_trees.h"

/**
 *binary_tree_balance - calculate the balance of the tree
 *@tree: Node
 *Return: the balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->parent)
		return (binary_tree_balance(tree->left) -
			binary_tree_balance(tree->right));

	return (1 + binary_tree_balance(tree->left) -
		binary_tree_balance(tree->right));
}
