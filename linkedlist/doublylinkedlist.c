#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
}Node;

Node *head;

void insert_beginning(int item);
void insert_last(int item);

int main(void)
{
    insert_last(4);
    insert_beginning(2);
    insert_last(3);
    insert_beginning(1);
    
    printf("%d %d %d %d\n", head->data, head->next->data, head->next->next->data, head->next->next->next->data);
    return (0);
}

void insert_beginning(int item)
{
    Node *node = (Node *) malloc(sizeof(Node));
    if (!node)
    {
        printf("Overflow!!!\n");
        return;
    }
    node->data = item;
    if (head == NULL)
    {
        node->next = NULL;
        node->prev = NULL;
        head = node;
    }
    else
    {
    node->prev = NULL;
    node->next = head;
    head->prev = node;
    head = node;
    }
    printf("Node inserted!!!\n");
}

void insert_last(int item)
{
    Node *node = (Node *) malloc(sizeof(Node));
    Node *current = head;

    if (!node)
    {
        printf("Overflow!!!\n");
        return;
    }
    node->data = item;
    if (head == NULL)
    {
        node->next = NULL;
        node->prev = NULL;
        head = node;
    }
    else
    {
        while (current->next != NULL)
        {
            current = current->next;
        }
        node->next = current->next;
        node->prev = current;
        current->next = node;
    }
    printf("Node Inserted!!!\n");    
}
