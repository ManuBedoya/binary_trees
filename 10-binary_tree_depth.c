#include "binary_trees.h"

/**
 *binary_tree_depth_recursive - Calculate the depth of the node
 *@tree: Node
 *@depth: Depth
 *Return: depth
*/
size_t binary_tree_depth_recursive(const binary_tree_t *tree, int depth)
{
	if (!tree)
		return (depth);
	return (binary_tree_depth_recursive(tree->parent, depth + 1));
}


/**
 *binary_tree_depth - Calls the recursive method
 *@tree: Node
 *Return: depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_depth_recursive(tree, -1));
}
