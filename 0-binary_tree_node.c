#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: parnt of the node to create
 * @value: value to store in new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{ binary_tree_t *new_bt;
new_bt = malloc(sizeof(binary_tree_t));
if (new_bt == NULL)
{ return (NULL); }
new_bt->parent = parent;
new_bt->n = value;
new_bt->left = NULL;
new_bt->right = NULL;
return (new_bt); }
