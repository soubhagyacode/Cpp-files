#include<iostream>
using namespace std;

void swap(int arr[], int start, int end);

int main()
{
    int arr[100], n;
    cout<<"Number of elements"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int start=0,end;
    for( int i=0;i<n/2;i++)
    {
        end=start+1;
        swap(arr,start,end);
        start=end+1; 
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
void swap(int arr[], int start, int end)
{
    int t=arr[start];
    arr[start]=arr[end];
    arr[end]=t;
}