#include "main.hpp"

Node *root = NULL;

int main(void)
{   
    root = insertNode(root, 2);
    insertNode(root, 34);
    insertNode(root, 14);
    insertNode(root, 4);
    insertNode(root, 25);
    insertNode(root, 12);

    preOrderTraversal(root);
    return 0;
}
