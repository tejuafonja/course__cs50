#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "tree.c"

bool search(node *tree,  int number);

int main(void)
{

    // Tree of size 0
    node *tree = NULL;
    tree = create_tree(tree);

    // Search for 2 in tree
    int number = 2;
    
    // Print tree;
    print_tree(tree);

    bool in_tree = search(tree, number);

    printf("%i in tree is %s\n", number, in_tree ? "true" : "false");

     // Free tree
    free_tree(tree);
    
}

bool search(node *tree, int number)
{
    if (tree  == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
    else if (number > tree->number)
    {
        return search(tree->right, number);
    }
    else
    {
        return true;
    }

}