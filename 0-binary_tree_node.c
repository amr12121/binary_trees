#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @parent: node parent
 * @value: Value of the node
 * Return: the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_n;

	n_n = malloc(sizeof(binary_tree_t));
	if (n_n == NULL)
	{
		return (NULL);
	}
	n_n->n = value;
	n_n->parent = parent;
	n_n->left = NULL;
	n_n->right = NULL;
	return (n_n);
}
