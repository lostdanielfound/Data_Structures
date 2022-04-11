/**
 * @file List.cpp
 * @author Daniel Guzman (danielsonguzman2000@gmail.com)
 * @brief Function definitions belonging to List.h, please refer to
 * README for 
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "List.h"
#include "Node.h"

template <class datatype>
List<datatype>::List()
{
    head = NULL; 
}

template <class datatype>
List<datatype>::~List()
{
    Node<datatype> *cur; 
    for (Node<datatype> *cur = head->next; cur != nullptr; cur = cur->next)
    {
        /* delete every node within the list */
        
    }
    
    
}

template <class datatype>
bool List<datatype>::add_at_start(datatype value)
{
    if (head == NULL)
    {
        /* If list hasn't been created yet */
        head = new Node<datatype>; 
        if (head == nullptr) { return false; } //new failed

        head->next = nullptr; 
        head->value = value; 

        return true; 
    }

    Node<datatype> *newnode = new Node<datatype>(); 
    
}

template <class datatype>
bool List<datatype>::add_at_end(datatype value)
{

}

template <class datatype>
void List<datatype>::remove(datatype key)
{

}

template <class datatype>
int List<datatype>::search(datatype key)
{
    
}