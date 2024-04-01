#include "binary_trees.h"
/**
 * binary_tree_uncle - function finds the uncle of a node
 * @node: pointer to node on binary tree
 *
 * Return: return pointer to node on binary tree otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand_parent;

	if (node == NULL)
		return (NULL);
	parent = node->parent;
	if (parent == NULL)
		return (NULL);
	grand_parent = parent->parent;
	if (grand_parent == NULL)
		return (NULL);
	if (grand_parent->left == parent)
		return (grand_parent->right);
	return (grand_parent->left);
}
