#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree
 */

int	binary_tree_balance(const binary_tree_t *tree)
{
	int	height_l;
	int	height_r;

	height_l = 0;
	height_r = 0;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		height_l = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		height_r = 1 + binary_tree_height(tree->right);
	return (height_l - height_r);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree, or 0 if tree is NULL
 */

size_t	binary_tree_height(const binary_tree_t *tree)
{
	size_t	height_l;
	size_t	height_r;

	height_l = 0;
	height_r = 0;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		height_l = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		height_r = 1 + binary_tree_height(tree->right);
	if (height_l > height_r)
		return (height_l);
	else
		return (height_r);
}
