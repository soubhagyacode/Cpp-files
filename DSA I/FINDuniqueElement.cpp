#include<iostream>
using namespace std;


int main()
{
    int arr[100], n;
    cout<<"Number of elements"<<endl;
    cin>>n;
    int sum=((n)*(n-1))/2;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for( int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j]){
                sum=sum-i-j;
            }
        }
    }
    cout<<arr[sum]<<endl;

}
