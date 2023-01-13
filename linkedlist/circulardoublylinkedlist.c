#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
}Node;

Node *head = NULL;
Node *current;

void insert_beginning(int item);
void insert_last(int item);
void delete_first();

int main(void)
{   
    insert_beginning(1);
    insert_last(2);
    insert_beginning(0);
    delete_first();
    printf("%d", head->data);
    return 0;
}

void insert_beginning(int item)
{
    current = head;
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
        node->prev = head;
        printf("Node inserted!!!\n");
    }
    else
    {
        while (current->next != head)
            current = current->next;
        current->next = node;
        node->prev = current;
        node->next = head;
        head = node;
        printf("Node inserted!!!\n");
    }
}

void insert_last(int item)
{
    current = head;
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
        node->prev = head;
        printf("Node inserted!!!\n");
    }
    else
    {
        while (current->next != head)
            current = current->next;
        current->next = node;
        node->prev = current;
        node->next = head;
        printf("Node inserted!!!\n");
    }
}

void delete_first()
{
    Node *temp;
    if (head->next = head)
    {
        free(head);
        head = NULL;
        printf("Node deleted!!!\n");
    }
    else
    {
        current = head;
        while (current->next != head)
        {
            current = current->next;
        }
        current->next = head->next;
        head->next->prev = current;
        temp = head;
        head = head->next;
        free(temp);
        printf("Node deleted!!!\n");        
    }
    
}