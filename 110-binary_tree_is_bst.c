#include "binary_trees.h"
#include <limits.h>

int is_bst_recursive(const binary_tree_t *tree, int *prev);

/**
 * binary_tree_is_bst - Checks if a binary tree is a
 * valid Binary Search Tree (BST).
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid BST, otherwise 0.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int prev = INT_MIN; /* Minimum possible integer */

	return (is_bst_recursive(tree, &prev));
}

/**
 * is_bst_recursive - Helper function to check if a binary
 * tree is a valid BST recursively.
 * @tree: A pointer to the current node in the recursive call.
 * @prev: A pointer to the previous node's value in the in-order trav.
 *
 * Return: 1 if tree is a valid BST, otherwise 0.
 */
int is_bst_recursive(const binary_tree_t *tree, int *prev)
{
	if (tree == NULL)
		return (1);

	/* Check left subtree */
	if (!is_bst_recursive(tree->left, prev))
		return (0);

	/* Check current node's value against previous node's value */
	if (tree->n <= *prev)
		return (0);

	/* Update previous node's value to the current node's value */
	*prev = tree->n;

	/* Check right subtree */
	return (is_bst_recursive(tree->right, prev));
}
