#include "binary_trees.h"

/**
 *binary_tree_height_recursive - calculate the height of the node
 *@tree: Node
 *@height: the height
 *Return: the height
 */
size_t binary_tree_height_recursive(const binary_tree_t *tree, size_t height)
{
	if (!tree)
		return (height);
	return (binary_tree_height_recursive(tree->left, height + 1));
}


/**
 *binary_tree_height - Call the relative function
 *@tree: Node
 *Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree || !(tree->left || tree->right))
		return (0);
	return (binary_tree_height_recursive(tree, 0));
}
