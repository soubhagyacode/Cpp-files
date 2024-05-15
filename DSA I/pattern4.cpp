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
        j=n-i+1;
        while(j<=n)
        {
            cout<<"*"<<" "<<i;
            j++;
        }
        cout<<"\n";
        i++;
    }
}