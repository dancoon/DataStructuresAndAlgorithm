#include "main.hpp"

Node *maxValueNode(Node *node)
{
    Node *current = node;
    while (current && current->right != NULL)
        current = current->right;
    return current;    
}
