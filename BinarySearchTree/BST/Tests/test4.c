#include "main.h"

Node *root = NULL;

int main(void)
{
    Node *min, *max, *search;
    
    root = insertNode(root, 2);
    insertNode(root, 34);
    insertNode(root, 14);
    insertNode(root, 4);
    insertNode(root, 25);
    insertNode(root, 12);

    search = searchNode(root, 34);
    if (search != NULL)
        printf("Found the node %d\n", search->data);
    else
        printf("Not found!!!\n");   

    return 0;
}
