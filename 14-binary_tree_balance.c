#include "binary_trees.h"

/**
 *binary_tree_balance_recursive - found the balance
 *@tree: Node
 *Return: the factor difference of the balance
 */
int binary_tree_balance_recursive(const binary_tree_t *tree)
{
	int heightr = 0;
	int heightl = 0;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	if (tree->left)
		heightl = 1 + binary_tree_balance_recursive(tree->left);
	if (tree->right)
		heightr = 1 + binary_tree_balance_recursive(tree->right);

	return (heightl > heightr ? heightl : heightr);
}

/**
 *binary_tree_balance - calculate the balance of the tree
 *@tree: Node
 *Return: the balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_balance_recursive(tree->left) -
		binary_tree_balance_recursive(tree->right));
}
