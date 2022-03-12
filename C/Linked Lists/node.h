#include <stdlib.h> 
#ifndef _NODE_
#define _NODE_

typedef int data_type; // By default, this type is set to int

struct node
{
    data_type value;
    struct node *next; 
};
typedef struct node Node; 

#endif