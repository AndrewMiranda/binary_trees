#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node to find the sibling
 * Return: sibling; or NULL if node is NULL or
 *         parent is NULL, or have no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node && node->parent->right != NULL)
		return (node->parent->right);
	if (node->parent->right == node && node->parent->left != NULL)
		return (node->parent->left);
	return (NULL);
}
