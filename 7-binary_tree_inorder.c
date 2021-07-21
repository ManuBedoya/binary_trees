#include "binary_trees.h"

/**
 *binary_tree_inorder - Print in inorder
 *@tree: root of tree
 *@func: Function to print
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
