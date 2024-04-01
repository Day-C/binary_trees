#include "binary_trees.h"
/**
 * binary_tree_depth - function cheks the depth of a node in a binary tree
 * @tree: pointer to node
 *
 * Return: return;
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);

	if (tree->parent == NULL || tree == NULL)
		return (0);
	count = binary_tree_depth(tree->parent);
	count += 1;
	return (count);
}
