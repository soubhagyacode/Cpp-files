#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int d)
        {
            data=d;
            left=NULL;
            right=NULL;
        }
};

node* insertnodes(node* root)
{
    int d;
    cin>>d;
    root=new node(d);
    if(d==-1)
    {
        return NULL;
    }
    cout<<"Enter left child node of "<<d<<endl;
    root->left=insertnodes(root->left);

    cout<<"Enter right child node of "<<d<<endl;
    root->right=insertnodes(root->right);

    return root;
}
void printUsingBFS(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
        }
    }
}
//5 3 4 -1 -1 8 -1 -1 9 10 -1 -1 5 -1 -1//
int main()
{
    node* root=NULL;
    //creating bst:
    root = insertnodes(root);
    // travesing the nodes:
    printUsingBFS(root);
}