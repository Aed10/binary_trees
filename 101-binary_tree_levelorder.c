#include "binary_trees.h"

/**
 * binary_tree_levelorder - function that goes through a binary tree
 * using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function.
 * Return: nothing
 */
void	binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t	*node;
	binary_tree_t	*left;
	binary_tree_t	*right;

	if (tree == NULL || func == NULL)
		return;
	node = (binary_tree_t *)tree;
	while (node != NULL)
	{
		left = node->left;
		right = node->right;
		func(node->n);
		if (left != NULL)
			binary_tree_levelorder(left, func);
		if (right != NULL)
			binary_tree_levelorder(right, func);
		return;
	}
}
