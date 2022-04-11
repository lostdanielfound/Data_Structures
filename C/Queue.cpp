#include "Queue.h"
#include "malloc.h"

/**
 * @brief Initalization function for Queue object, 
 * must be called for Queue setup
 * 
 * @param Q 
 */
void QueueInit(Queue Q)
{
    Q.front = NULL;
    Q.size = 0; 
}

/**
 * @brief Enqueue at the back of the Queue 
 * 
 * @param Q 
 * @param value 
 * @return 1 if value was successfully Enqueued, 0 if unsuccessful Enqueue
 */
int enqueue(Queue Q, data_type value)
{
    Node *head = (Node*)malloc(sizeof(Node)); 
    if (head == NULL) { return 0; }

    head->value = value; 
    head->next = NULL; 

    if (Q.front == NULL)
    {
        /* First check to see if front is NULL */
        Q.front = head; 
    }
    
    Q.size++; 
    return 1;
}

/**
 * @brief Dequeue the data_type of the front Node 
 * 
 * @param Q 
 * @param value 
 * @return 1 if value was successfully Enqueued, 0 if unsuccessful Enqueue 
 */
int dequeue(Queue Q, data_type *value) 
{
    /* Check if empty (You should really check isempty before calling this) */
    if (Q.front == NULL) { return 0; } 
    *value = Q.front->value;

    Node *temp = (Node*)malloc(sizeof(Node)); //setting up temp node
    if (temp == NULL) { return 0; }
    temp = Q.front; //have temp point to front Queue node
    Q.front = Q.front->next; //have front node point to it's next

    free(temp); //delete the node
    Q.size--; 

    return 1; 
}

/**
 * @brief Simply
 * 
 * @param Q 
 * @return size of the Queue  
 */
int isempty(Queue Q) { return Q.size; }

/**
 * @brief Peek at the front data_type value of 
 * the front node of the Queue object. This does 
 * not dequeue the front node. 
 * 
 * @param Q 
 * @return data_type value of the front node
 */
data_type peek(const Queue Q) { return Q.front->value; }