#include<iostream>
using namespace std;

int power(int, int);
int factorial(int);

int main()
{
   int a,b,n,r;
   //cin>>a>>b;
   //int ans= power(a,b);
   //cout<< ans <<endl;
    cout<<"enter n"<< "c" <<"r"<<endl;
    cin>>n>>r;
    int ans= factorial(n)/(factorial(r)*factorial(n-r));
    cout<< ans <<endl;
    int i=1,j=2;
    cout<< ++i+j++ <<endl;
}

int power(int a, int b)
{
    int prod=1;
    for(int i=0;i<b;i++)
    {
        prod=a*prod;
    }
    return prod;
}

int factorial(int x)
{
    int prod=1;
    for(int i=2;i<=x;i++)
    {
        prod=prod*i;
    }
    return prod;
}