#include "binary_trees.h"
/**
 * binary_tree_node - function adds new node to a binary tree
 * @parent: a pinter to the parent node
 * @value: nodes value
 * Return: return a pointer to the root node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
