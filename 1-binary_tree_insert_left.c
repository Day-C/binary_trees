#include "binary_trees.h"
/**
 * binary_tree_insert_left - function adds the left child to parent node
 * @parent: pointer to parent node
 * @value: value of left child
 * Return: return pointer to parent node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *current;

	if (!parent)
		return (NULL);

	current = malloc(sizeof(binary_tree_t));
	if (!current)
		return (NULL);

	current->parent = parent;
	current->n = value;

	if (!parent->left)
		parent->left = current;
	else
	{
		temp = parent->left;
		parent->left = current;
		current->left = temp;
		temp->parent = current;
	}
	return (current);

}
