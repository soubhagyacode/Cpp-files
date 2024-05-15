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

class insert {
public:
    void insertAtHead(Node* &head, int d)
    {
        Node* temp= new Node(d);
        temp->next=head;
        head=temp;
    }

    void insertAtTail(Node* &tail,int d)
    {
        Node* temp= new Node(d);
        tail->next=temp;
        tail=temp;
    }

    void insertAtMiddle(Node* &head, Node* &tail,int postn,int d)
    {
        if(postn==1)
        {
            insertAtHead(head,d);
        }
        Node* it=head;
        Node* temp=new Node(d);
        int cnt=1;
        while(cnt<postn-1)
        {
            it=it->next;
            cnt++;
        }
        temp->next=it->next;
        it->next=temp;
        if(temp->next==NULL)
        {
            tail=temp;
        }
    }
};

class Delete{
public:
    void deletion(Node* &head,Node* &tail,int postn)
    {
        if(postn==1)
        {
            head=head->next;
        }
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<postn)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        if(curr->next==NULL)
        {
            tail=prev;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
};

main()
{
    Node* elem= new Node(10);
    Node* head=elem;
    Node* tail=elem;
    print(elem);

    insert* in= new insert();

    in->insertAtHead(head,20);
    print(head);

    in->insertAtTail(tail,30);
    print(head);

    in->insertAtMiddle(head,tail,4,40);
    print(head);
    print(tail);

    Delete* del= new Delete();

    del->deletion(head,tail,4);
    print(head);
    print(tail);
}