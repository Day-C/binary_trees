#include "binary_trees.h"
/**
 * binary_tree_sibling - function returns its other sibling if any
 * @node: pointer to node
 *
 * Return: returns sibling otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;

	if (parent->left == node)
		return (parent->right);
	return (parent->left);
}
