#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left, *right;
}Node;

int max(int a, int b);

Node *newNode(int data);

Node *insertNode(Node *node, int data);

void inorderTraversal(Node *node);

Node *minValueNode(Node *node);

Node *maxValueNode(Node *node);

Node *deleteNode(Node *root, int data);

Node *searchNode(Node *root, int data);

int maxDepth(Node *root);

void preOrderTraversal(Node *node);

void postOrderTraversal(Node *node);

int isBalanced(Node *node);

int getHeight(Node *node);