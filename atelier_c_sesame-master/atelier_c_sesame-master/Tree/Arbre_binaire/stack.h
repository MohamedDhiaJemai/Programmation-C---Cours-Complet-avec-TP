#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    false,
    true
} Bool;

typedef struct StackElement
{
    int value;
    struct StackElement *next;
}StackElement , *Stack;

Stack new_stack(void);
Bool is_empty_stack(Stack st);
void print_stack(Stack st);
Stack push_stack(Stack x , int val);
Stack pop_stack(Stack st);
int top_stack(Stack st);
int stack_length(Stack st);

