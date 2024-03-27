#include "binary_trees.h"
/**
 * binary_tree_height - functiin gets the hight of a tree
 * @tree: pointer to root node
 *
 * Return: return nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_hight;
	int right_hight;

	if (tree == NULL)
		return (0);
	else
	{
		left_hight = binary_tree_height(tree->left);
		right_hight = binary_tree_height(tree->right);
		if (left_hight > right_hight)
			return (left_hight + 1);
		else
			return (right_hight + 1);
	}
}
