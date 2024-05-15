#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int n,sum=0,count=0,temp;
    cout<<"input the binary number you want decimal number of "<<endl;
    cin>>n;
    temp=n;;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    n=temp;
    for(int i=0;i<count;i++)
    {
        if(n%10==1)
        {
            int exp=pow(2,i);
            sum=sum+ exp;
        }
        n=n/10;
    }
    cout<<sum;
    
}