#include "main.hpp"

Node *root = NULL;

int main(void)
{  
    Node *min, *max;

    root = insertNode(root, 2);
    insertNode(root, 34);
    insertNode(root, 14);
    insertNode(root, 4);
    insertNode(root, 25);
    insertNode(root, 12);

    min = minValueNode(root);
    printf("Min value is %d\n", min->data);
    max = maxValueNode(root);
    printf("Max value is %d and the depth is %d\n", max->data, maxDepth(root));

    return 0;
}
