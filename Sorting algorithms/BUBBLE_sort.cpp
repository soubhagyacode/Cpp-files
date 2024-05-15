#include <iostream>
using namespace std;

void swap(int, int, int[]);
void printarray(int[],int);
int main()
{
    int i,n, arr[100];
    cout<<"Enter the number of element in the array: ";
    cin>>n;
    cout<<"Enter the elements in the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j;
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(arr[j-1]>arr[j])
            {
                swap(arr[j-1],arr[j]);
            }
        }
    }
    printarray(arr,n);
}

void swap(int i, int j, int arr[])
{
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}