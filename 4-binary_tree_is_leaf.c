#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function check if a node is a leaf
 * @node: node to check
 *
 * Return: return 1 if nofe if a leaf otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL)
	{
		if (node->right == NULL)
			return (1);
	}
	return (0);
}
