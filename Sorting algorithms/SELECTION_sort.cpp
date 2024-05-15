#include <iostream>
using namespace std;

void swap(int, int, int[]);
void printarray(int[],int);
int main()
{
    int i,n; int arr[100];
    cout<<"Enter the number of elements in your array"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j,temp;
    for(i=0;i<n-1;i++)
    {
        temp=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[temp]>arr[j])
            {
                temp=j;
            }
        }
        swap(i,temp,arr);
    }
    printarray(arr, n);
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