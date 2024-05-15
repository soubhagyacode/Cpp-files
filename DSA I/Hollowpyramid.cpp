#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int n;
    cout<<"Enter number of rows or column"<<endl;
    cin>>n;
    i=1;
    while(i<=n)
    {   
        j=1;
        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }
        j=n-i+1;
        while(j<=n)
        {
            if(i==1||i==n)
               cout<<"*"<<" ";
            else if(j==n-i+1)
               cout<<"*";
            else
               cout<<" ";
            j++;
        }
        j=n-i+1;
        while(j<n)
        {
            if(j==n-1)
            {
                cout<<"*";
            }
            else
                cout<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
}