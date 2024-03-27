#include "binary_trees.h"
/**
 * binary_tree_inorder - functiin displays tree with inorder traversal
 * @tree: pointer to the root node
 * @func: pointer to a fu ctiin that prints digits to stdout
 * Return: return nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
