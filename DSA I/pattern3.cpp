#include<iostream>
using namespace std;

int main()
{
    int i;
    int n;
    cout<<"Enter number of rows or column"<<endl;
    cin>>n;
    i=1;
    while(i<=n*n)
    {
        cout<<i<<" ";
        if (i%n==0)
           cout<<"\n";
        i++;
    }
}