#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    int height;
    struct node *left, *right;
}Node;

Node *newNode(int data);

Node *insertNode(Node *root, int data);

Node *leftRotate(Node *node);

Node *rightRotate(Node *node);

Node *deleteNode(Node *root, int data);

Node *minValueNode(Node *node);

Node *maxValueNode(Node *node);

void inorderTraversal(Node *node);

void postOrderTraversal(Node *node);

void preOrderTraversal(Node *node);

int getBalance(Node *node);

int height(Node *node);

int max (int a, int b);

int maxDepth(Node *root);

Node *searchNode(Node *root, int data);

int isBalanced(Node *node);

int getHeight(Node *node);
