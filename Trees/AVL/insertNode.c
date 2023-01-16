#include "main.h"

Node *newNode(int data)
{
    Node *node = (Node *) malloc(sizeof(Node));
    node->data = data;
    node->right = node->left = NULL;
    node->height = 1;
    return node;
}

Node *insertNode(Node *node, int data) {
    if (node == NULL)
        return (newNode(data));
    if (data < node->data)
        node->left = insertNode(node->left, data);
    else if (data > node->data)
        node->right = insertNode(node->right, data);
    else
        return node;

    node->height = 1 + max(height(node->left), height(node->right));
    int balance = getBalance(node);
    
    if (balance > 1 && data < node->left->data)
        return rightRotate(node);

    if (balance < -1 && data > node->right->data)
        return leftRotate(node);

    if (balance > 1 && data > node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    if (balance < -1 && data < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

int height(Node *node)
{
    if (node == NULL)
        return 0;
    return node->height;
}

int max (int a, int b)
{
    return a > b? a : b;
}

int getBalance(Node *node)
{
    if (node == NULL)
        return 0;
    return height(node->left) - height(node->right);
}

Node *rightRotate(Node *node)
{
    Node *x = node->left;
    Node *y = x->right;

    x->right = node;
    node->left = y;

    node->height = max(height(node->left), height(node->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}


Node *leftRotate(Node *node)
{
    Node *x = node->right;
    Node *y = x->left;

    x->left = node;
    node->right = y;

    node->height = max(height(node->left), height(node->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}
