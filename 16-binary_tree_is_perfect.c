#include "binary_trees.h"

/**
 * binary_tree_is_perfect - This is a function that checks if
 * a binary tree is perfect.
 * @tree: is a pointer to tree to be checked
 *
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_height_b(tree->left) == binary_tree_height_b(tree->right))
	{
		binary_tree_is_perfect(tree->left);
		binary_tree_is_perfect(tree->right);
	}
	else
		return (0);
	return (1);
}
