#include "binary_trees.h"


/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @node: pointer to the node
 *
 * Return: 1 if node is leaf or 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL || node->left || node->right)
		return (0);

	return (1);
}
