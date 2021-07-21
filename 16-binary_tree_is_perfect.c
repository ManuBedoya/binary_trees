#include "binary_trees.h"

/**
 *binary_tree_is_perfect - verify if the tree is perfect
 *@tree: Node
 *Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int suml = 0;
	int sumr = 0;

	if (!tree)
		return (0);
	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (-10000);
	suml += 1 + binary_tree_is_perfect(tree->left);
	sumr += 1 + binary_tree_is_perfect(tree->right);

	if (suml < 0 || sumr < 0)
		return (0);

	return (suml == sumr ? 1 : 0);
}
