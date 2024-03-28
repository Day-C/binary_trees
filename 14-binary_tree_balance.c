#include "binary_trees.h"
/**
 * hight - function measures the hight of a binary tree
 * @tree: pointer to the parent node
 *
 * Return: nothing
 */
int tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	
	return (right_height + 1);
}
/**
 * binary_tree_balance - function measures the balance factor
 * @tree: pointer to parent node
 *
 * Return: return;
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return (left_height - right_height);
}
