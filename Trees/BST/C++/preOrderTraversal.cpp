#include "main.hpp"

void preOrderTraversal(Node *node)
{
    if (node != NULL)
    {
        printf("%d ", node->data);
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }
}