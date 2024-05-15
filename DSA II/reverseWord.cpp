#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverseword(int s, int e, string r);

int main()
{
    string s; vector<int> index;
    getline(cin, s);
    int l=s.length();
    int i=0;
    index.push_back(-1);
    while(i<l)
    {
        if(s[i]==' ')
        {
            index.push_back(i);
        }
        i++;
    }
    index.push_back(l);
    for(i=0;i<index.size();i++)
        cout<<index[i]<<" "<<endl;
    for(i=1;i<index.size();i++)
    {
        s=reverseword(index[i-1]+1,index[i]-1, s);
    }
    cout<<s<<endl;
}

string reverseword(int s, int e, string r)
{
    while(s<e)
    {
        swap(r[s++],r[e--]);
    }
    return r;
}