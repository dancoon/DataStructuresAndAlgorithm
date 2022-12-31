#include "main.h"
#include <stdio.h>

/**
 * push - push an item into stack
 * 
 * Return: void
*/
void push(Stack *stack, int item)
{
    if (stack->top == SIZE - 1)
    {
        printf("Stack is full");
        return;
    }
    stack->data[++stack->top] = item;   
}

/**
 * pop - pop the last data in the stack
 * 
 * return: int data
*/
int pop(Stack *stack)
{
    if (stack->top == -1)
    {
        printf("Stack is empty\n");
        return (-1);
    }
    return (stack->data[stack->top--]);
}
 /**
  * peek - peek
  * 
  * Return: int
 */
int peek(Stack *stack)
{
    if (stack->top == -1)
    {
        printf("Is empty\n");
        return (-1);
    }
    return (stack->data[stack->top]);    
}

/**
 * is_empty - is empty
 * 
 * Return: 1 if empty
*/
int is_empty(Stack *stack)
{
    return (stack->top == -1);
}