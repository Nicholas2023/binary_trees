#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree (BST).
 * @tree: Double pointer to the root node of the BST to insert the value.
 * @value: Value to store in the node to be inserted.
 *
 * Description: If the address stored in tree is NULL, the created node must
 * become the root node. If the value is already present in the tree, it must
 * be ignored.
 *
 * Return: A pointer to the created node, or NULL on failure or if the value
 *         is already present.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree)
	{
		if (*tree == NULL)
		{
			*tree = binary_tree_node(NULL, value);
			return (*tree);
		}

		if (value < (*tree)->n)
			return (bst_insert(&(*tree)->left, value));
		else if (value > (*tree)->n)
			return (bst_insert(&(*tree)->right, value));
	}

	return (NULL); /* Value is already present, return NULL as required. */
}
