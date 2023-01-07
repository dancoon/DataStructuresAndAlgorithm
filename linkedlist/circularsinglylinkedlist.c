#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;

Node *head = NULL;
Node *current;

void insert_beginning(int item);

int main(void)
{
    insert_beginning(1);
    insert_beginning(0);
    printf("%d", head->next->data);    
    return 0;
}

void insert_beginning(int item)
{
    Node *node = (Node *) malloc(sizeof(Node));
    if (node == NULL)
    {
        printf("Overflow!!!\n");
        return;
    }
    node->data = item;
    if (head == NULL)
    {
        head = node;
        node->next = head;
        printf("Node inserted!!\n");    
    }
    else
    {
        current = head;
        while (current->next != head)
            current = current->next;
        current->next = node;
        node->next = head;
        head = node;
        printf("Node inserted!!\n");
    }
    
    

}   