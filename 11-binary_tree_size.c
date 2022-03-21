#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size of
 *
 * Return: size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
int dirleft, dirright;
if (tree == NULL)
{
return (0);
}
if ((tree->left == NULL) && (tree->right == NULL))
{
return (1);
}
dirleft = binary_tree_size(tree->left);
dirright = binary_tree_size(tree->right);
return (dirleft + dirright + 1);
}
