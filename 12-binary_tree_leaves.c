#include "binary_trees.h"
/**
 * binary_tree_leaves - function counst numberof leave nodes in a binary tree
 * @tree: pointer to the parent node
 *
 * Return: return number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);

	left_count = binary_tree_leaves(tree->left);
	right_count = binary_tree_leaves(tree->right);

	if (tree->left	== NULL && tree->right == NULL)
		return (left_count + right_count + 1);
	return (left_count + right_count);
}
