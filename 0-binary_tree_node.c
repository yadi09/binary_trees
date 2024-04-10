#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - function
 * @parent: ..........
 * @value: .............
 * Return: binary tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);

new_node->n = value;
new_node->left = NULL;
new_node->right = NULL;
new_node->parent = parent;

return (new_node);
}
