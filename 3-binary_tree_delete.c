#include "binary_trees.h"
/**
 * binary_tree_delete - function frees memory allocated for binary tree
 * @tree: pointer to root node
 *
 * Return: returns nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *curr, *temp;

	curr = tree;

	while (curr)
	{
		if (curr->left)
		{
			curr = curr->left;
			continue;
		}
		else if (curr->right)
		{
			curr = curr->right;
			continue;
		}
		else
		{
			temp = curr->parent;
			if (temp->left == curr)
				temp->left = NULL;
			else
				temp->right = NULL;
			printf("freex %d\n", curr->n);
			free(curr);
		}
		
		curr = temp;
		if (curr->parent == NULL)
		{
			if  (curr->right == NULL &&  curr->left == NULL)
				break;
		}
	}
	printf("freex %d\n", curr->n);
	free(curr);
	
}
