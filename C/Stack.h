#include "node.h"
#ifndef _STACK_
#define _STACK_

struct stack
{
    Node *head; 
    int size; 
}
typedef struct stack Stack; 

void StackInit(Stack S); 

int push(Stack S, data_type value);
int pop(Stack S, data_type *value);
int isempty(const Stack S); 
data_type peek(const Stack S);

#endif // _STACK_