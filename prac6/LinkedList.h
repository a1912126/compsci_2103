#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
class LinkedList{
    friend class Node;
    private: 
        Node*head;
        int curSize = 0;
    public:
        LinkedList();
        LinkedList(int* array, int len);
        void insertPosition(int pos, int newNum);
        bool deletePosition(int pos);
        int get(int pos);
        Node* getNode(int index);
        int search(int target);
        void printList();
        ~LinkedList();
};

#endif