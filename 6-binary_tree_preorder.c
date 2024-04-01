#include "binary_trees.h"
/**
 * binary_tree_preorder - function travers binary tree and print values
 * @tree: pointer to root node
 * @func: pointer to funtion that calles each node
 * Return: return nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
