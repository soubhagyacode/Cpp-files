#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};

void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head,Node* &tail,int d)
{
    if(head==NULL)
    {
        Node* temp= new Node(d);
        head=temp;
        tail=temp;
    }
   else{
        Node* temp= new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
   }
}

void insertAttail(Node* &head,Node* &tail, int d)
{
    if(tail==NULL)
    {
        Node* temp= new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp= new Node(d);
        temp->prev=tail;
        tail->next=temp;
        tail=temp;
    }
}

void insertAtMiddle(Node* &head,Node* &tail,int d, int postn)
{
    if(postn==1)
    {
        insertAtHead(head,tail,d);
        return;
    }
    Node* temp=new Node(d);
    Node* pre=NULL;
    Node* curr=head;
    int cnt=1;
    while(cnt<postn)
    {
        pre=curr;
        curr=curr->next;
        cnt++;
    }
    if(curr==NULL)
    {
        insertAttail(head,tail,d);
        return;
    }
    temp->next=curr;
    temp->prev=pre;
    pre->next=temp;
    curr->prev=temp;
}

main()
{
    Node* node1= new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);

    insertAtHead(head,tail,20);
    print(head);

    insertAttail(head,tail,30);
    print(head);

    insertAtMiddle(head,tail,40,2);
    print(head);
}