#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: Pointer to the node to find the sibling.
 *
 * Return: Pointer to the sibling node, or NULL if node is NULL,
 *         the parent is NULL, or node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	parent = node->parent;
	if (parent->left != NULL && parent->right != NULL)
	{
		if (parent->left == node)
		{
			return (parent->right);
		}
		else
		{
			return (parent->left);
		}
	}
	return (NULL);
}
