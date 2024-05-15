#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

void insertNode(Node* &tail,int d)
{
    if(tail==NULL)
    {
        Node*temp=new Node(d);
        tail=temp;
    }
    else{
        Node*temp=new Node(d);
    }
}