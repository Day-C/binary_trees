#include "binary_trees.h"
/**
 * binary_tree_size - function returns the number in nodes in a binary tree
 * @tree: pointer to parent node
 * Return: number of nodes in bunary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);
	else
	{
		left_count = binary_tree_size(tree->left);
		right_count = binary_tree_size(tree->right);
	}
	return (1 + left_count + right_count);
}
