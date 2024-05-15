#include <bits/stdc++.h>
using namespace std;

class Graph{
public:
    unordered_map<int,list<pair<int,int>>> adjList;

    void addEdges(int u, int v, int w)
    {
        pair<int, int> p=make_pair(v,w);
        adjList[u].push_back(p);
    }

    void printList()
    {
        for(auto i:adjList)
        {
            cout<<i.first<<" -> ";
            for(auto j:adjList[i.first])
            {
                cout<<"("<<j.first<<", "<<j.second<<") ";
            }
            cout<<endl;
        }
    }

    void dfs(int node, unordered_map<int, bool> &visited, stack<int> &topologicalSort)
    {
        visited[node]=true;

        for(auto neighbour: adjList[node])
        {
            if(!visited[neighbour.first])
            {
                dfs(neighbour.first,visited,topologicalSort);
            }
        }
        topologicalSort.push(node);
    }

    void getShortest_path_in_a_DAG(stack<int> &topologicalSort, vector<int> &dist)
    {
        while(!topologicalSort.empty())
        {
            int top=topologicalSort.top();
            topologicalSort.pop();
            if(dist[top]!=INT_MAX)
            {
                for(auto i:adjList[top])
                {
                    if(dist[top]+i.second<dist[i.first])
                    {
                        dist[i.first]=dist[top]+i.second;
                    }
                }
            }
        }
    }
};

int main()
{
    Graph g;
    g.addEdges(0,1,5);
    g.addEdges(0,2,3);
    g.addEdges(1,2,2);
    g.addEdges(1,3,6);
    g.addEdges(2,3,7);
    g.addEdges(2,4,4);
    g.addEdges(2,5,2);
    g.addEdges(3,4,-1);
    g.addEdges(4,5,-2);

    g.printList();

    stack<int> topologicalSort;
    unordered_map<int, bool> visited;
    for(int i=0;i<6;i++)
        g.dfs(i,visited,topologicalSort);

    vector<int> dist(6);
    for(int i=0;i<6;i++)
        dist[i]=INT_MAX;

    int srcNode=1;
    dist[srcNode]=0;
    g.getShortest_path_in_a_DAG(topologicalSort,dist);//DAG: Directed A cyclic Graph

    for(auto i:dist)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}