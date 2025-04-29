#include "Node.h"

Node::Node(int val, Node *next):data(val),link(next)
{
}

void Node::setData(int val)
{
    this->data = val;
}

void Node::setLink(Node *next)
{
    this->link = next;
}

int Node::getData() 
{
    return this->data;
}

Node *Node::getLink() 
{
    return this->link;
}
