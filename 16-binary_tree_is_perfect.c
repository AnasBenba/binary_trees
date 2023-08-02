#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the binary tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}
	if (left_height > right_height)
	{
		return (left_height);
	}
	else
	{
		return (right_height);
	}
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise or if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_is_perfect = 0;
	int right_is_perfect = 0;
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height != right_height)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		left_is_perfect = binary_tree_is_perfect(tree->left);
		right_is_perfect = binary_tree_is_perfect(tree->right);
		return (left_is_perfect && right_is_perfect);
	}
	return (0);
}
