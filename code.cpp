#include <bits/stdc++.h>
using namespace std;

int rec(int n)
{
    if(n==0 || n==1)
        return n;

    return 4*rec(n-1)-4*rec(n-2);

}

int main()
{
    int ans=rec(10);
    cout<<ans<<endl;
    return 0;
}