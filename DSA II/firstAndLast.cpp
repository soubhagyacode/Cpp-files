#include <iostream>
using namespace std;

int BinarySearch(int arr[], int, int, int);
int firstAndLast(int arr[], int, int array[]);

int main()
{
    int arr[100], size, key, i,array[2];
    cout << "enter size of the array" << endl;
    cin >> size;
    cout << "enter elemnets in the array" << endl;
    for (i = 0; i < size; i++)
        cin >> arr[i];
    cout << "enter key" << endl;
    cin >> key;
    int ans = BinarySearch(arr, key, 0, size - 1);
    firstAndLast(arr,ans,array);
    cout<<array[0]<<array[1]<<endl;
}

int BinarySearch(int arr[], int key, int start, int end)
{
    if (end >= start)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            return BinarySearch(arr, key, start, mid - 1);
        }
        return BinarySearch(arr, key, mid + 1, end);
    }
    return -1;
}

int firstAndLast(int arr[], int k, int array[])
{
    int i = k;
    while (arr[i] == arr[k])
    {
        i--;
    } 
    array[0]=i+1;
    //cout << i + 1;
    int j = k;
    while (arr[j] == arr[k])
    {
        j++;
    } 
    array[1]=j-1;
    //cout << " " << j - 1;
}