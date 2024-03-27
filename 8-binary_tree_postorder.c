#include "binary_trees.h"
/**
 * binary_tree_postorder - function disolays a binary tree with the postordert traversal texhnique
 * @tree: pointer to root node
 * @func: function pointer to functiin that displays items
 * Return: return nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
