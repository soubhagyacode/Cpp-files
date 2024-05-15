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
        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=i)
        { 
        cout<<"*";
        j++;
        }
        cout<<endl;
        i++;
    }
}