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
        while(j<=i)
        {
            cout<<i+j-1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    i=1;
    while(i<=n)
    {
        j=1;
        count=i;
        while(j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}