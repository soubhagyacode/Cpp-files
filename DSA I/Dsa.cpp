#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the last term"<< "\n"; cin>>n;
    int i=2, count =0;
    // int sum =0;
    while(i<n)
    {
        if(n%i==0)
        {
            count=1;
            break;
        }
        i++;
    }
    if (count==1){
        cout<<n<<" is a not a prime number";
    }
    else
    {
        cout<<n<<" is a prime number";
    }
    // cout << sum << endl;
}