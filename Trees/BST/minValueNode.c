#include "main.h"

Node *minValueNode(Node *node)
{
    Node *current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;   
}
