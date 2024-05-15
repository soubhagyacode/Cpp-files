#include<iostream>
using namespace std;

int main()
{
    int i=1,j;
    int n;
    cout<<"Enter number of rows or column"<<endl;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n-i+1)
        {
            cout<<j<<" ";
            j++;
        }
        j=1;
        while(j<2*i-1)
        {
            cout<<"*"<<" ";
            j++;
        }
        /* Same thing as above but longer. 
        while(j<=n)
        {
            cout<<"*"<<" ";
            j++;
        }
        j=n;
        while(j>n-i+1)
        {
            cout<<"*"<<" ";
            j--;
        }*/
        j=n-i+1;
        while(j>=1)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<"\n";
        i++;
    }
}