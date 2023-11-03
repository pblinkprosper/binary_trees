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
/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to root node of tree to measure balance factor.
 *
 * Return: 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0, height_r = 0;

	if (tree == NULL)
		return (0);

	height_l = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
	height_r = (tree->right) ? (int)binary_tree_height(tree->right) : -1;

	return (height_l - height_r);
}
