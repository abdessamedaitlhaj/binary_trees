#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf
 * @node: the node to be checked
 *
 * Return: 1 if true. 0 if not or NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);
	return (0);
}
