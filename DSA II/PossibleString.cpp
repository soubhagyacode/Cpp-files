#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*in INPUT we must enter a string without space, for instance aaabcde. OUTPUT will show if
two consecutive chars are deleted how many possible strings without repitition can we get. OUTPUT is an
int value*/

int main()
{
    char arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=n-1;
    for(int i=0;i<n-2;i++)
    {
        if(arr[i]==arr[i+2])
        {
            count=count-1;
        }else{continue;}
    }
    cout<<count;
}

