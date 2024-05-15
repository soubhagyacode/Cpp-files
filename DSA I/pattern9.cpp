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
        j=i;
        while(j<=n)
        {
            if(i==1||i==n)
                cout<<"*"<<" ";
            else if (j==i || j==n)
            {
                cout<<"*"<<" ";
            }
            else
                cout<<" "<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
}