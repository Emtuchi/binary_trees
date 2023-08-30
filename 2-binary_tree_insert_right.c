#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right child
 *                            of a parent node
 * @parent: pointer to parent node
 * @value: value to insert in child node
 *
 * Return: NULL or new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	if (parent->left != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
