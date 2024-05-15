#include <iostream>
using namespace std;


int main()
{
    int n,arr[100],count=0;
    cout<<"input the numbe you want binary number of "<<endl;
    cin>>n;
    int i=0;
    while(n!=0)
    {
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    cout<<i<<endl;
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j]<<" ";
    }
}

/*int Decimal_to_Binary(int n,int arr[])
{
    int count=0;
    for(int n,i=0;n!=0;n=n/2, i++)
    {
        arr[i]=n%2;
    }
}*/