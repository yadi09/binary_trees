#include "binary_trees.h"
#include <stdlib.h>

/**
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
  binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
  if (new_node == NULL)
    return NULL;

  new_node->n = value;

  if (parent == NULL)
    return new_node;
  else
    {
      new_node->parent = parent;
      if (parent->left == NULL)
	parent->left = new_node;
      else if (parent->right == NULL)
	parent->right = new_node;
      else
	return NULL;
    }

  return new_node;
}
