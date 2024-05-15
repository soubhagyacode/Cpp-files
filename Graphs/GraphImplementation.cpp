#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

class Graph{
public:
    unordered_map<int,list<int>> adj;

    void addEdge(int u, int v, bool direction)
    {
        adj[u].push_back(v);

        // false implies undirected and true implies directed graph
        if(!direction)
        {
            adj[v].push_back(u);
        }
    }

    void print()
    {
        for(auto i:adj)
        {
            cout<<i.first<<" -> ";
            for(auto j:i.second)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }


    void BreadthFirstTraversal(queue<int> q, unordered_map<int, bool> &visited)
    {
        if(q.empty())
        {
            return;
        }

        int top = q.front();
        cout<<q.front()<<" ";

        q.pop();
        for(auto i: adj[top])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i]=1;
            }
        }
        BreadthFirstTraversal(q, visited);
    }
};

int main()
{
    cout<<"enter the number of vertices"<<endl;
    int n;
    cin>>n;

    cout<<"enter the number of edges"<<endl;
    int m;
    cin>>m;

    Graph g;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cout<<"Enter two vertices"<<endl;
        cin>>x>>y;

        g.addEdge(x,y,0);
    }

    g.print();

    queue<int> q;
    unordered_map<int, bool> visited;

    q.push(0);
    visited[0]=1;

    cout<<endl;
    g.BreadthFirstTraversal(q,visited);
}