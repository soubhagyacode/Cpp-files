#include<iostream>
using namespace std;
int main ()
{
    int arr[100][100],i,j,n,m,sum=0;
    cout<<"Enter the number of rows and column "<<endl;
    cin>>n;
    cin>>m;
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int p,q;
    cout<<"Input the element you want surrounding sum of"<<endl;
    cin>>p;
    cin>>q;
    if (p+q==0)
    {
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    if (p+q==n-1)
    {
        for(i=p-2;i<n;i++)
        {
            for(j=0;j<2;j++)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    if (p+q==m-1)
    {
        for(i=0;i<2;i++)
        {
            for(j=q-2;j<m;j++)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    if (p+q==m+n-2)
    {
        for(i=p-1;i<n;i++)
        {
            for(j=q-1;j<m;j++)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    if(p+q==1)
    {
        for(i=0;i<3*p+2*q;i++)
        {
            for(j=0;j<2*p+3*q;j++)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    if(p+q==n && p<<q)
    {
        for(i=p-1;i<3;i++)
        {
            for(j=q-1;j<m;j++)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    cout<<sum-arr[p][q];
}