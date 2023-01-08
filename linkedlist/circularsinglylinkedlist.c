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
void insert_last(int item);
void search(int item);

int main(void)
{
    insert_beginning(1);
    insert_last(2);
    insert_beginning(0);
    insert_last(3);
    search(0);
    printf("%d %d %d", head->data, head->next->data, head->next->next->next->data);    
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

void insert_last(int item)
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
        printf("Node inserted!!!\n");
    }
}

void search(int item)
{
    current = head;
    if (head == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }
    else
    {
        while (current->next != head)
        {
            if (current->data == item || current->next->data == item)
            {
                printf("Item found!!!\n");
                return;
            }
            current = current->next;
        }
    }
    printf("Item not found!!!!\n");
}