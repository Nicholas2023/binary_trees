#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node, or NULL if not found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *f_ancestor, *s_ancestor;

	if (first == NULL || second == NULL)
		return (NULL);

	f_ancestor = first->parent;
	s_ancestor = second->parent;

	while (f_ancestor)
	{
		s_ancestor = second->parent;
		while (s_ancestor)
		{
			if (f_ancestor == s_ancestor)
				return (f_ancestor);
			s_ancestor = s_ancestor->parent;
		}
		f_ancestor = f_ancestor->parent;
	}

	return (NULL);
}
