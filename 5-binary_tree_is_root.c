#include "binary_trees.h"

/**
 * binary_tree_is_root - function
 * @node: ........
 * Return: ..........
 */

int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);

if (node->parent)
return (0);

return (1);
}
