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
void insert_location(int item, int location);
void delete_node(Node **hd);
void search(int item);
Node *reverse_node(Node **hd);

int main(void)
{
	insert_beginning(2);
	insert_last(12);
	insert_location(34, 0);
	printf("%d %d %d\n", head->data, head->next->data, head->next->next->data);
	// delete_node(&head->next);
	// insert_last(67);
	head = reverse_node(&head);
	printf("%d %d %d\n", head->data, head->next->data, head->next->next->data);
	// search(12);
	return (0);
}

void insert_beginning(int item)
{
	Node *node = (Node *) malloc (sizeof(Node));
	if (!node)
	{
		printf("Overflow!!!\n");
		return;
	}
	node->data = item;
	node->next = head;
	head = node;
	printf("Node inserted!!!\n");
}

void insert_last(int item)
{
	Node *node = (Node *) malloc(sizeof(Node));
	if (!node)
	{
		printf("Overflow!!!!\n");
		return;
	}
	node->data = item;
	if (!head)
	{
		node->next = head;
		head = node;
	}
	else
	{
		current = head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		node->next = current->next;
		current->next = node;
	}
	printf("Inserted!!!\n");
}

void insert_location(int item, int location)
{
	int i;

	Node *node = (Node *) malloc(sizeof(Node));
	if (node == NULL)
	{
		printf("Overflow!!!\n");
		return;
	}
	node->data = item;
	current = head;
	for (i = 1; i < location; i++)
	{
		current = current->next;

		if (current == NULL)
		{
			printf("Cannot insert a node at that location!!!\n");
			return;
		}
	}
	node->next = current->next;
	current->next = node;
}

void delete_node(Node **hd)
{
	Node *temp;
	temp = *(hd);
	*hd = (*hd)->next;
	free(temp);
}

void search(int item)
{
	if (head == NULL)
	{
		printf("Linked list is empty!!!\n");
	}
	current = head;
	while (current)
	{
		if (current->data == item)
		{
			printf("Item found\n");
			return;
		}
		else
			current = current->next;

		if (current->next == NULL)
		{
			printf("Item not found!!!\n");
			return;
		}
	}
}

Node *reverse_node(Node **hd)
{
	Node *current, *next, *prev;
	current = *hd;
	prev = NULL;
	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	return (head);
}