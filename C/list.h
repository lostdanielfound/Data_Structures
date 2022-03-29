#include <stdlib.h>
#include "node.h"
#ifndef _LIST_
#define _LIST_

struct list
{
    Node *head;    
};
typedef struct list List;

void ListInit(List L); 

int add_at_start(List L, data_type value);
int add_at_end(List L, data_type value);
void remove(List L, data_type key);
int search(List L, data_type key);

#endif