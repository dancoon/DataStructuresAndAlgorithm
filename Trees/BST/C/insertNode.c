#include "main.h"

Node *newNode(int data)
{
    Node *node = (Node *) malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

Node *insertNode(Node *node, int data)
{
    if (node == NULL)
        return newNode(data);
    if (data < node->data)
        node->left = insertNode(node->left, data);
    if (data > node->data)
        node->right = insertNode(node->right, data);
    return node;
}
