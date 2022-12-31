#include "main.h"
#include <stdio.h>

int main(void)
{
    Stack stack_container;
    Stack *stack = &stack_container;
    stack->top = -1;
    
    push(stack, 12);
    push(stack, 2);

    int d = pop(stack);
    printf("%d\n", d);

    push(stack, 29);
    int l = peek(stack);

    pop(stack);
    pop(stack);
    peek(stack);
    is_empty(stack) ? printf("Empty\n") : printf("Not empty\n"); 
    return (0);
}