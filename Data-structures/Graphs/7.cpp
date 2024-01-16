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

    bool isBipartite()
    {
        vector<int> color(V, -1);

        for (int i = 0; i < V; ++i)
        {
            if (color[i] == -1)
            {
                if (!bfsIsBipartite(i, color))
                {
                    return false;
                }
            }
        }

        return true;
    }

    bool bfsIsBipartite(int start, vector<int> &color)
    {
        queue<int> q;
        q.push(start);
        color[start] = 0;

        while (!q.empty())
        {
            int current = q.front();
            q.pop();

            for (int neighbor : adjList[current])
            {
                if (color[neighbor] == -1)
                {
                    color[neighbor] = 1 - color[current];
                    q.push(neighbor);
                }
                else if (color[neighbor] == color[current])
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    Graph graph(6);
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(2, 0);
    graph.addEdge(1, 3);
    graph.addEdge(3, 4);
    graph.addEdge(4, 5);

    if (graph.isBipartite())
    {
        cout << "The graph is bipartite.\n";
    }
    else
    {
        cout << "The graph is not bipartite.\n";
    }

    return 0;
}
