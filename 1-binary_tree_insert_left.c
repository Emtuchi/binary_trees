#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node on the left child of the parent node
 * @parent: parent node
 * @value: value for new node
 * Return: NULL or new node pointer
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	if ((parent->left) != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
