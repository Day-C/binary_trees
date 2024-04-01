#include "binary_trees.h"
/**
 * binary_tree_is_full - function checks if a tree if full
 * @tree: pointer to root node
 *
 * Return: return;
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full, right_full;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		 return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	left_full = binary_tree_is_full(tree->left);
	right_full = binary_tree_is_full(tree->right);
	
	return (1 * left_full * right_full);
}
