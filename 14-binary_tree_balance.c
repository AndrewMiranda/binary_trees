#include "binary_trees.h"

int tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node of the tree to measure the balance factor
 * Return: balance factor; or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree == NULL)
		return (0);

	balance = tree_height(tree->left) - tree_height(tree->right);

	return (balance);
}

/**
 * tree_height - measures the height of a binary tree
 * @tree: root node of the tree to measure the height
 * Return: height of the node; 0 if tree is NULL
 */
int tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);

}
