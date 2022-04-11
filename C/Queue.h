#include "node.h"
#ifndef _QUEUE_
#define _QUEUE_

struct queue
{
    Node *front; 
    int size;
};
typedef struct queue Queue; 

void QueueInit(Queue Q);

int enqueue(Queue Q, data_type value);
int dequeue(Queue Q, data_type *value);
int isempty(Queue Q);
data_type peek(const Queue Q);  

#endif // _QUEUE_  