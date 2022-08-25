#include "binary_trees.h"

/**
 * binary_tree_balance - This is  a function that
 * measures the balance factor of a binary tree.
 * @tree: is a pointer to the root node of the
 * tree to measure the balance factor.
 *
 * Return: Balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = binary_tree_height_b(tree->left);
	right = binary_tree_height_b(tree->right);
	return (left - right);
}
