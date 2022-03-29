/**
 * @file Node.h
 * @author Daniel Guzman (danielsonguzman2000@gmail.com)
 * @brief Templated Node class, can be used independent apart 
 * from other data-structures.
 * @version 0.1
 * @date 2022-03-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _NODE_CPLUSPLUS
#define _NODE_CPLUSPLUS

template <class datatype> class Node
{
private: 
    datatype value; 
    Node *next;

public: 
    Node()
};


#endif //_NODE_CPLUSPLUS