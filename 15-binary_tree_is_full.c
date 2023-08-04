#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full, 0 if not full or tree is NULL
 */

int	binary_tree_is_full(const binary_tree_t *tree)
{
	int	full_l;
	int	full_r;

	full_l = 0;
	full_r = 0;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		full_l = binary_tree_is_full(tree->left);
	if (tree->right != NULL)
		full_r = binary_tree_is_full(tree->right);
	if (full_l == 0 || full_r == 0)
		return (0);
	else
		return (1);
}
