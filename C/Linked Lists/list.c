#include "list.h"

void ListInit(List L) {
    L.head = NULL;  
}

int add(List L, data_type value) {
    if (L.head == NULL) {
        L.head = (Node*)malloc(sizeof(Node)); //initalize the head node
        if (L.head == NULL) { return -1; } //failed to allocate memory

        L.head->next = NULL;
        L.head->value = value; 

        return 0; //Successfully added node
    }

}

void remove(List L, int index) {

}

data_type search(List L, int index) {

}