#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t	*binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t	*new_node;

	new_node = NULL;
	/* allocate memory for new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	/* assign data to this node */
	new_node->n = value;
	/* initialize left and right children as NULL */
	new_node->left = NULL;
	new_node->right = NULL;
	/* check if parent is NULL */
	if (parent == NULL)
	{
		new_node->parent = NULL;
		return (new_node);
	}
	/* assign parent to this node */
	new_node->parent = parent;
	/* check if parent already has a left child */
	if (parent->left != NULL)
	{
		/* make new node the left child of parent */
		new_node->left = parent->left;
		/* make parent the parent of new node's left child */
		new_node->left->parent = new_node;
	}
	/* make new node the left child of parent */
	parent->left = new_node;
	return (new_node);
}
