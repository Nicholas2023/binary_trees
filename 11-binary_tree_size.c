#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: The size of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* Recursively calculate the size of the left and right subtrees. */
	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	if (tree == NULL)
		return (0);

	/* The size of the tree is the sum of the sizes of the subtrees */
	/* plus one for the current node. */
	return (left_size + right_size + 1);
}
