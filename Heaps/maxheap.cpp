#include <iostream>
using namespace std;

class MaxHeap{
public:
    int arr[100];
    int size;
    MaxHeap()
    {
        arr[0]=-1;
        size=0;
    }

    void insert(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;

        int parent=index/2;
        if(size>1)
        {

            while(parent>=1 && arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
                parent=parent/2;
                }
        }
    }

    void Delete()
    {
        arr[1]=arr[size];
        size=size-1;

        int index=1;
        int child1=2;
        while(index<size-1)
        {
            int child1=2*index;
            int child2=2*index +1;
            if(child1<size && arr[child1]>arr[child2] && arr[index]<arr[child1])
            {
                swap(arr[index],arr[child1]);
                index=child1;
            }
            else if(child2<size && arr[child1]<arr[child2] && arr[index]<arr[child2])
            {
                swap(arr[index],arr[child2]);
                index=child2;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<< " ";
        }cout<<endl;
    }
};

void heapify(int arr[], int n, int i)
{
    int largest=i;
    int leftChild=2*i;
    int rightChild=2*i+1;
    if(leftChild<=n && arr[largest]<arr[leftChild])
    {
        largest=leftChild;
    }
    if(rightChild<=n && arr[largest]<arr[rightChild])
    {
        largest=rightChild;
    }


    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}


void heapSort(int arr[],int n)
{
    int size=n;
    while(size>1)
    {
        swap(arr[1],arr[size]);
        size--;
        heapify(arr,size,1);
    }
}

int main(){
    MaxHeap obj;
    obj.insert(10);
    obj.insert(5);
    obj.insert(6);
    obj.insert(2);
    obj.insert(12);
    obj.insert(7);
    obj.insert(9);

    obj.print();

    obj.Delete();

    obj.print();

    int arr[6]={-1,20,30,50,60,45};
    int n=5;
    // BUILD HEAP FROM ARRAY
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
    // SORTTING ARRAY
    heapSort(arr,n);

    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}