#include <bits/stdc++.h>
using namespace std;

class Graph
{

private:
    int V;
    vector<vector<int>> adjList;

public:
    Graph(int vertices) : V(vertices), adjList(vertices) {}

    void addEdge(int u, int v)
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    int connectedComp()
    {
        vector<bool> vis(V, 0);
        int cnt = 0;
        for (int i = 0; i < V; i++)
        {
            if (vis[i] == 0)
            {
                dfs(i, adjList, vis);
                cnt++;
            }
        }
        return cnt;
    }

    void dfs(int node, vector<vector<int>> &adjList, vector<bool> &vis)
    {
        vis[node] = 1;
        for (auto a : adjList[node])
        {
            if (!vis[a])
            {
                dfs(a, adjList, vis);
            }
        }
    }
};

int main()
{
    Graph graph(8);
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 0);
    graph.addEdge(1, 3);
    graph.addEdge(3, 4);
    graph.addEdge(4, 5);
    graph.addEdge(6, 7);
    cout << "Connected components in this graph are: " << graph.connectedComp() << endl;
}