#include "binary_trees.h"
/**
 * binary_tree_delete - functioin deletes all nodes of binary tree recursively
 * @tree: pointert to the parent node
 *
 * Return: return nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
