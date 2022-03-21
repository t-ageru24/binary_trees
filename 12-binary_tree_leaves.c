#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree){
size_t count ;
size_t dirleft,dirright;
if (tree == NULL){
return 0;
}

dirleft = binary_tree_leaves(tree->left);
dirright = binary_tree_leaves(tree->right);
count = dirleft + dirright;
if (tree->left == NULL && tree->right == NULL){
count = count +1;
return count;
}
return count;
}
