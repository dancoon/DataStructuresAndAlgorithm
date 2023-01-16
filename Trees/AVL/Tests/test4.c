#include "main.h"

Node *root = NULL;

int main(void)
{
    Node  *search;
    
    root = insertNode(root, 2);
    insertNode(root, 12);
    insertNode(root, 59);
    insertNode(root, 23);

    inorderTraversal(root);
    printf("\n");
    preOrderTraversal(root);

    search = searchNode(root, 2);
    if (search != NULL)
        printf("Found the node %d\n", search->data);
    else
        printf("Not found!!!\n");   

    return 0;
}
