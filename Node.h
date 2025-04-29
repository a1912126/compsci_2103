#ifndef NODE_H
#define NODE_H
#include <iostream>
class Node{
    public:
        Node(int val, Node*next);
        void setData(int val);
        void setLink(Node* next);
        int getData() ;
        Node* getLink() ;
    private:
        int data;
        Node* link;
};
#endif