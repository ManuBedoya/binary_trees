#include "binary_trees.h"
/*FALTA CORRECCIÓN*/
/**
 *binary_tree_delete - Delete all
 *@tree: root
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
