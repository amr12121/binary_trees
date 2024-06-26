#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t n = 0;
	size_t s = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			n = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			s = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((l > s) ? l : s);
	}
}
