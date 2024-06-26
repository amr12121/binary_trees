#include "binary_trees.h"
/**
 * binary_tree_insert_right - add a node in the right of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	n_n = binary_tree_node(parent, value);
	if (n_n == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		n_n->right = parent->right;
		parent->right->parent = n_n;
	}
	parent->right = n_n;
	return (n_n);
}
