#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0, n = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		n = binary_tree_leaves(tree->left);
		r = binary_tree_leaves(tree->right);
		l = l + r;
		return ((!n && !r) ? l + 1 : l + 0);
	}
}
