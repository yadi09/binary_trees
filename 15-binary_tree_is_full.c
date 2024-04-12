#include "binary_trees.h"

/**
 * binary_tree_is_full - function
 * @tree: ..........
 * Return: ........
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return (0);

if (tree->right == NULL && tree->left == NULL)
return (1);

if (tree->right != NULL && tree->left != NULL)
{
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

return (0);
}
