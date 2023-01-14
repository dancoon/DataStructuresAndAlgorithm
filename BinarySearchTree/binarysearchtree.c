#include <stdio.h>
#include <stdlib.h>

/**
 * 
*/
typedef struct node
{
    int data;
    struct node *left, *right;
}Node;

Node *newNode(int data);
Node *insertNode(Node *node, int data);
void inorderTraversal(Node *node);
Node *minValueNode(Node *node);
Node *maxValueNode(Node *node);
Node *deleteNode(Node *root, int data);
Node *searchNode(Node *root, int data);

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

    deleteNode(root, 34);
    inorderTraversal(root);
    min = minValueNode(root);
    printf("\nMin value is %d", min->data);
    max = maxValueNode(root);
    printf("\nMax value is %d", max->data);

    search = searchNode(root, 34);
    if (search != NULL)
        printf("\nFound the node %d\n", search->data);
    else
        printf("\nNot found!!!\n");   

    return 0;
}

Node *newNode(int data)
{
    Node *node = (Node *) malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

Node *insertNode(Node *node, int data)
{
    if (node == NULL)
        return newNode(data);
    if (data < node->data)
        node->left = insertNode(node->left, data);
    if (data > node->data)
        node->right = insertNode(node->right, data);
    return node;
}

void inorderTraversal(Node *node)
{
    if (node != NULL)
    {
        inorderTraversal(node->left);
        printf("%d ", node->data);
        inorderTraversal(node->right);
    }
}

Node *minValueNode(Node *node)
{
    Node *current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;   
}

Node *maxValueNode(Node *node)
{
    Node *current = node;
    while (current && current->right != NULL)
        current = current->right;
    return current;    
}

Node *deleteNode(Node *root, int data)
{
    if (root == NULL)
        return root;
    if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        else
        {
            Node *temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, data);
        }      
    }
    return root;
}

Node *searchNode(Node *root, int data)
{
    if (root == NULL || root->data == data)
        return root;
    if (data < root->data)
        return searchNode(root->left, data);
    else
        return searchNode(root->right, data);
}