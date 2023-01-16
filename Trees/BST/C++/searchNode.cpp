#include "main.hpp"

Node *searchNode(Node *root, int data)
{
    if (root == NULL || root->data == data)
        return root;
    if (data < root->data)
        return searchNode(root->left, data);
    else
        return searchNode(root->right, data);
}
