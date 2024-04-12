#include "binary_trees.h"

/**
 * binary_tree_nodes - function
 * @tree: ...........
 * Return: ...........
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t node = 0;

if (tree == NULL)
return (0);

if (tree->right || tree->left)
node++;

node += binary_tree_nodes(tree->left);
node += binary_tree_nodes(tree->right);

return (node);
}
