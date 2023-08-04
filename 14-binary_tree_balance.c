#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree
 */

int	binary_tree_balance(const binary_tree_t *tree)
{
	int	balance;

	balance = 0;
	if (tree == NULL)
		return (0);
	balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	return (balance);
}
