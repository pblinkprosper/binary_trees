#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
*
* Return: 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		height_l = 1 + binary_tree_height(tree->left);

	if (tree->right)
		height_r = 1 + binary_tree_height(tree->right);

	return (height_l > height_r ? height_l : height_r);
}
