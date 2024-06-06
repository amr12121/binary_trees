#include "binary_trees.h"
/**
 * binary_tree_is_leaf - know if a node is a leaf, that means that the node
 * does not have any child neither left nor right
 * @node: node to study
 * Return: 1 if it is a leaf or 0 if it is not
 */
int binary_tree_is_leaf(const binary_tree_t *n)
{
	if (n == NULL)
		return (0);
	if (n->left == NULL && n->right == NULL)
		return (1);
	return (0);
}
