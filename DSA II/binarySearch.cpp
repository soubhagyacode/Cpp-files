#include<iostream>
using namespace std;

int BinarySearch(int arr[] ,int , int , int );

int main()
{
    int arr[100],size,key,i;
    cout<<"enter size of the array"<<endl;
    cin>>size;
    cout<<"enter elemnets in the array"<<endl;
    for(i=0;i<size;i++)
        cin>>arr[i];
    cout<<"enter key"<<endl;
    cin>>key;
    int ans=BinarySearch(arr, key, 0, size-1);
    cout<<"Index of the key element in the array is - " <<ans<<endl;
}

int BinarySearch(int arr[],int key, int start, int end)
{
    if (end>=start)
    {
        int mid=(start+end)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]>key)
        {
            return BinarySearch(arr, key, start, mid-1);
        }
        return BinarySearch(arr, key, mid+1, end);
    }
    return -1;
}