#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height of
 *
 * Return: the height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;
if (tree == NULL ||
(tree != NULL && tree->left == NULL && tree->right == NULL))
return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
if (left >= right)
return (1 + left);
return (1 + right);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise. If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
binary_tree_t *l, *r;
if (tree == NULL)
return (0);
l = tree->left;
r = tree->right;
if  (tree != NULL && tree->left == NULL && tree->right == NULL)
return (1);
if (l == NULL || r == NULL)
return (0);
if (binary_tree_height(l) == binary_tree_height(r))
{
if (binary_tree_is_perfect(l) && binary_tree_is_perfect(r))
return (1); }
return (0);
}
