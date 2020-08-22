#include "binary_trees.h"

/**
 * heap_node - nodes into a max binary heap
 * @root: double pointer root node of the Heap
 * @value:  value node to be nodeed
 * Return: pointer to nodeed node or NULL
 */

heap_t *heap_node(heap_t **root, int value)
{
	heap_t *new_node = NULL;
    heap_t *tmp = *root;

	new_node = malloc(sizeof(heap_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (*root == NULL)
	{
		*root = new_node;
		new_node->parent = NULL;
		return (new_node);
	}
	if (tmp->left == NULL)
	{
		new_node->parent = tmp;
		tmp->left = new_node;
		return (new_node);
	}
	new_node->parent = *root;
	tmp->right = new_node;

	return (new_node);
}
