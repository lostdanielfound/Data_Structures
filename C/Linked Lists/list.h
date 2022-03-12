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
int add(List L, data_type value);
void remove(List L, int index);
data_type search(List L, int index);

#endif