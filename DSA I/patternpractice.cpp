#include<iostream>
using namespace std;

int main()
{
    int i=1,j;
    int n;
    cout<<"Enter number of rows or column"<<endl;
    cin>>n;
    int count;
    while(i<=n)             
    {                                                       
        j=1;
        while(j<=n)
        {
            if(i==1||i==n)
                cout<<"*"<<" ";
            else if (j==1 || j==n)
            {
                cout<<"*"<<" ";
            }
            else
                cout<<" "<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}