#include "binary_trees.h"

/**
 * tree_height - functiin gets the hight of a tree
 * @tree: pointer to root node
 *
 * Return: return nothing
 */
int tree_height(const binary_tree_t *tree)
{
	int left_hight;
	int right_hight;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	left_hight = tree_height(tree->left);
	right_hight = tree_height(tree->right);

	if (left_hight > right_hight)
		return (left_hight + 1);
	return (right_hight + 1);

}

/**
 * tree_is_full - function checks if a tree if full
 * @tree: pointer to root node
 *
 * Return: return;
 */
int tree_is_full(const binary_tree_t *tree)
{
	int left_full, right_full;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	left_full = tree_is_full(tree->left);
	right_full = tree_is_full(tree->right);

	return (1 * left_full * right_full);
}

/**
 * binary_tree_is_perfect - function checks if binary tree is perfect
 * @tree: pointer to root node
 *
 * Return: return 1 on success and 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;
	int left_full, right_full;

	if (tree == NULL)
		return (0);
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	left_full = tree_is_full(tree->left);
	right_full = tree_is_full(tree->right);

	if (left_height == right_height)
	{
		if (left_full == 1 && right_full == 1)
			return (1);
	}
	return (0);
}
