/**
 * @file List.h
 * @author Daniel Guzman (danielsonguzman2000@gmail.com)
 * @brief Templatized Linked List class
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Node.h"
#ifndef _LIST_CPLUSPLUS
#define _LIST_CPLUSPLUS

template <class datatype> class List
{
private:
    /* Head of the List */
    Node<datatype> *head; 
public:
    List(); //intialize the head
    ~List(); //delete all nodes

    bool add_at_start(datatype value); 
    bool add_at_end(datatype value); 
    void remove(datatype key); 
    int search(datatype key); 
};

#endif //_LIST_CPLUSPLUS