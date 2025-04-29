#include "LinkedList.h"
#include <iostream>
#include <limits>
LinkedList::LinkedList():head(nullptr),curSize(0)
{
}

LinkedList::LinkedList(int *array, int len)
{
    head = nullptr;
    if (len>0){
        head = new Node(array[0],nullptr);
    }
    Node * cur = head;
    for (int i =1;i<len;i++){
        Node * newNode = new Node(array[i],nullptr);
        cur->setLink(newNode);
        cur = cur->getLink();
    }
    this->curSize = len;
}
Node* LinkedList::getNode(int index){
    Node * cur = head;
    for (int i = 1;i<index;i++){
        if (cur->getLink() == nullptr){
            return cur;
        }
        cur = cur->getLink();
    }
    return cur;

}
void LinkedList::insertPosition(int pos, int newNum)
{
    Node * newNode = new Node(newNum,nullptr);
    if (head==nullptr){
        head = newNode;
    }
    if (pos==1){
        newNode->setLink(head);
        head = newNode;
    }
    else{
        Node* prev = getNode(pos-1);
        newNode->setLink(prev->getLink());
        prev->setLink(newNode);
    }
    this->curSize+=1;
}

bool LinkedList::deletePosition(int pos)
{
    if (pos<1 || pos>curSize){
        return false;
    }
    if (pos == 1) { 
        Node* temp = head;
        head = head->getLink();
        delete temp;
    } else {
        Node* prev = getNode(pos - 1);
        Node* toDelete = prev->getLink();
        prev->setLink(toDelete->getLink());
        delete toDelete;
    }
    this->curSize-=1;
    return true;
    
}

int LinkedList::get(int pos)
{
    if (pos<1 ||pos>this->curSize){
        return std::numeric_limits<int>::max();
    }
    Node * cur = getNode(pos);
    return cur->getData();
}

int LinkedList::search(int target)
{
    Node * cur = head;
    int res = 1;
    while(cur!=nullptr){
        if (cur->getData()==target){
            return res;
        }
        res+=1;
    }
    return -1;
}

void LinkedList::printList()
{
    Node* cur = head;
    if (head==nullptr){
        return;
    }
    std::cout<<'[';
    while(cur!=nullptr){
        std::cout<<cur->getData();
        if (cur->getLink()!=nullptr){
            std::cout<<' ';
        }
        cur = cur->getLink();
    }
    std::cout<<']'<<std::endl;
}

LinkedList::~LinkedList()
{
    Node * cur = head;
    while (cur!= nullptr){
        Node * nxt = cur;
        cur = cur->getLink();
        delete nxt;
    }
    this->curSize = 0;
}
