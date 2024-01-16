#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    Graph(int vertices) : V(vertices), adjList(vertices) {}

    void addEdge(int u, int v)
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    bool hasCycle()
    {
        unordered_set<int> visited;
        for (int i = 0; i < V; ++i)
        {
            if (visited.find(i) == visited.end())
            {
                if (hasCycleUtil(i, -1, visited))
                {
                    return true;
                }
            }
        }
        return false;
    }

private:
    int V;
    vector<vector<int>> adjList;

    bool hasCycleUtil(int current, int parent, unordered_set<int> &visited)
    {
        visited.insert(current);

        for (int neighbor : adjList[current])
        {
            if (visited.find(neighbor) == visited.end())
            {
                if (hasCycleUtil(neighbor, current, visited))
                {
                    return true;
                }
            }
            else if (neighbor != parent)
            {

                return true;
            }
        }

        return false;
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

    if (graph.hasCycle())
    {
        cout << "The graph contains a cycle.\n";
    }
    else
    {
        cout << "The graph does not contain a cycle.\n";
    }

    return 0;
}
