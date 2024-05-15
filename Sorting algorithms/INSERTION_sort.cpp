#include <iostream>
using namespace std;

void swap(int, int, int[]);
void printarray(int[],int);
int main()
{
    int n; int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j>=0;j--)
        {
            if(arr[j]>arr[j+1])
            {
                swap(j,j+1,arr);
            }
            else{
                break;
            }
            printarray(arr,n);
            cout<<endl;
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

#include <bits/stdc++.h>


void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    int j;
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        for(j=i-1;j>=0;j--)
        {

            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }

        }
        arr[j+1]=temp;
    }
}

