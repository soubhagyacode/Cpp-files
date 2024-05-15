#include<iostream>
using namespace std;

int main()
{
    int i=0,j;
    int n;
    cout<<"Enter number of rows or column"<<endl;
    cin>>n;
    while(i<n)
    {
        j=0;
        while(j<n)
        {
            cout<<"*"<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
}