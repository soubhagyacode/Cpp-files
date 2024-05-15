#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int prod=1,sum=0;
    for(n;n%10!=0;n=n/10)
    {
        prod*=n%10;
        sum+=n%10;
    }
    cout<<prod-sum<<endl;
}