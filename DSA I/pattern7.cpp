#include<iostream>
using namespace std;

int main()
{
    int i=1,j;
    int n;
    cout<<"Enter number of rows or column"<<endl;
    cin>>n;
    int count=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            char asci= 'A'+count-1;
            cout<< asci <<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}