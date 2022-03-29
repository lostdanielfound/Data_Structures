#include "list.h"

void ListInit(List L) { L.head = NULL; }

int add_at_start(List L, data_type value) 
{
    /* Creating the newNode */
    Node *newNode = (Node*)malloc(sizeof(Node)); 
    if (newNode == NULL) { return 0; } //failed to allocate memory

    newNode->next = L.head;
    newNode->value = value; 

    L.head = newNode; 

    return 1; //Successfully added node
}

int add_at_end(List L, data_type value) 
{
    if (L.head == NULL) 
    {
        L.head = (Node*)malloc(sizeof(Node)); //initalize the head node
        if (L.head == NULL) { return 0; } //failed to allocate memory

        L.head->next = NULL;
        L.head->value = value; 

        return 1; //Successfully added node
    }

    /* Making of the new node */
    Node *newNode = (Node*)malloc(sizeof(Node)); 
    newNode->value = value; 
    newNode->next = NULL;

    /* Node to be used to transverse to the end of list */
    Node *temp = L.head; 

    /* Transversing until we get to the end */
    while (temp->next != NULL) { temp = temp->next; }

    /* adding the newNode */

    temp->next = newNode; 
    return 1; 
}

void remove(List L, data_type key) 
{

    /* Node to be used temporary */
    Node *temp;

    if (L.head->value == key)
    {
        /* Key is found in the head Node
        and thus we need to move next node
        and free head. */

        temp = L.head; //backup the head to free its memory to the heap 
        L.head = L.head->next; //moving to the next node in the list
        free(temp); 
    }
    else
    {
        Node *cur = L.head; 
        
        while (cur->next != NULL)
        {
            /* transverse through the list until 
            we reach the node with the key value */
            if (cur->next->value = key)
            {
                /* We have found the Node with the  
                key value within the list */

                temp = cur->next; 
                cur->next = cur->next->next; 
                free(temp); 

                break;

            }
            else { cur = cur->next; }
            
        }
        
    }
    
    return; 
}

int search(List L, data_type key) 
{
    Node *temp = L.head; 

    while (temp != NULL)
    {
        /* Transverse through the list 
        until we either find a node with the 
        given key or none of the node have the 
        given key */

        /* The key is in the list! */
        if (temp->value = key) { return 1; }
        temp = temp->next; 
    }

    return 0; 
}