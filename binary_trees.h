#ifndef BIN_TREES_H
# define BIN_TREES_H

/* Libraries */
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

/* Structures */
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

/* Binary tree */
typedef struct binary_tree_s
{
	int	n;
	struct binary_tree_s	*parent;
	struct binary_tree_s	*left;
	struct binary_tree_s	*right;

}	binary_tree_t;

/* AVL tree */
typedef struct binary_tree_s	avl_t;

/* Prototypes */
/* Mandatory tasks */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
#endif /* BIN_TREES_H */