#define SIZE 25

typedef struct 
{
    int data[SIZE];
    int top;
}Stack;

void push(Stack *stack, int item);
int pop(Stack *stack);
int peek(Stack *stack);
int is_empty(Stack *stack);