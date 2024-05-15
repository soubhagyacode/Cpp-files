#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int , int );

int main()
{
    int arr[100],size,i;
    cout<<"enter size of the array"<<endl;
    cin>>size;
    cout<<"enter elemnets in the array"<<endl;
    for(i=0;i<size;i++)
        cin>>arr[i];
    int ans=BinarySearch(arr, 0, size-1);
    cout<<"Index of the pivot element in the array is - " <<ans<<endl;
}

int BinarySearch(int arr[], int start, int end)
{
    while (end>=start)
    {
        int mid=start+(end-start)/2;
        if(mid==start)
        {
            return mid;
        }
        if(arr[mid]>arr[0])
        {
            return BinarySearch(arr, mid+1, end);
        }
        return BinarySearch(arr, start, mid);
    }
    return -1;
}