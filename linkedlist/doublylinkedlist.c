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
void insert_location(int item, int loc);
void delete_first();
void delete_last();

int main(void)
{
    insert_last(1);
    insert_last(2);
    insert_last(3);
    insert_last(4);
    insert_last(5);
    // insert_beginning(2);
    // insert_last(3);
    // insert_beginning(1);
    // insert_location(0, 2); 
    delete_first();   
    delete_last();
    printf("%d\n", head->next->next->data);
     printf("%d\n", head->data);
    // printf("%d %d %d %d\n", head->data, head->next->data, head->next->next->data, head->next->next->next->data);
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

void insert_location(int item, int loc)
{
    int i;
    Node *current = head;
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
        node->prev =NULL;
        head = node;
    }
    else if (loc == 0)
    {
        node->next = head;
        node->prev = NULL;
        head->prev = node;
        head = node;
    }
    else
    {
        for (i = 0; i < loc; i++)
        {
            current = current->next;
            if (current->next == NULL)
            {
                printf("Invalid location!!!\n");
                return;
            }
        }
        node->next = current;
        node->prev = current->prev;
        current->prev->next = node;
        printf("Node inserted!!!\n");
    }
}

void delete_first()
{
    Node *temp;
    if (head == NULL)
    {
        printf("List is empty!!!\n");
        return;
    }
    else if (head->next == NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
        printf("Node deleted!!!\n");
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
        printf("Node deleted!!\n");
    }    
}

void delete_last()
{
    Node *temp;
    
    if (head == NULL)
    {
        printf("List empty!!!\n");
        return;
    }
    if (head->next == NULL)
    {
        temp = head;
        head = NULL;
        free(temp);
        printf("Node deleted!!!\n");
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
        printf("Node deleted!!\n");
    }   
}