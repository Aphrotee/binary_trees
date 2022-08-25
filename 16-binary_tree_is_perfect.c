#include "binary_trees.h"

/**
 * binary_tree_height_b - This is a function that measures the
 * height of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: hieght of the node or 0.
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	int a = 0, b = 0, c = 0;

	if (!tree)
		return (c);
	c = 1;
	if (tree->left)
	{
		a += binary_tree_height_b(tree->left);
	}
	if (tree->right)
	{
		b += binary_tree_height_b(tree->right);
	}
	if (a > b)
		c += a;
	else
		c += b;
	return (c);
}

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
