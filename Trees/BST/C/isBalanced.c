#include "main.h"

int getHeight(Node *node)
{
    if (node == NULL)
        return 0;
    int leftHeight = getHeight(node->left);
    if (leftHeight == -1)
        return -1;
    int rightHeight = getHeight(node->right);
    if (rightHeight == -1)
        return -1;
    if (abs(leftHeight - rightHeight) > 1)
        return -1;
    return max(leftHeight, rightHeight) + 1;
}

int isBalanced(Node *node)
{
    return getHeight(node) != -1;
}