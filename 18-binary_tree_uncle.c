#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: Pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node, or NULL if node is NULL,
 *         the parent is NULL, the grandparent is NULL, or node has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	parent = node->parent;
	grandparent = parent->parent;
	if (grandparent->left != NULL && grandparent->right != NULL)
	{
		if (grandparent->left == parent)
		{
			return (grandparent->right);
		}
		else
		{
			return (grandparent->left);
		}
	}
	return (NULL);
}
