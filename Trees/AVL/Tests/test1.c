#include "main.h"

Node *root = NULL;

int main(void)
{
    root = insertNode(root, 12);
    insertNode(root, 34);
    insertNode(root, 4);
    insertNode(root, 14);
    insertNode(root, 32);
    insertNode(root, 6);

    inorderTraversal(root);
    printf("height: %d", height(root));
}