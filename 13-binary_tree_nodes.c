#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the nodes in
 *
 * Description: A NULL pointer is not a node
 *
 * Return: number of nodes with at least 1 child in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t dirleft, dirright;
if ((tree == NULL) || ((tree->left == NULL) && (tree->right == NULL)))
return (0);
dirleft = binary_tree_nodes(tree->left);
dirright = binary_tree_nodes(tree->right);
return (1 + dirleft + dirright);
}
