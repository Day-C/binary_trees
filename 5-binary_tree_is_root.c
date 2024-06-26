#include "binary_trees.h"
/**
 * binary_tree_is_root - function checks if a node is root
 * @node: node of binary tree to check
 *
 * Return: return 1 if node is root otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
