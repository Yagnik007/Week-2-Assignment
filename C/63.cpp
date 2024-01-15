#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int vertices;
    list<int> *adjacencyList;

public:
    Graph(int v)
    {
        vertices = v;
        adjacencyList = new list<int>[v];
    }

    void addEdge(int v, int w)
    {
        adjacencyList[v].push_back(w);
    }

    void bfs(int startVertex)
    {
        vector<bool> visited(vertices, false);
        queue<int> q;

        visited[startVertex] = true;
        q.push(startVertex);

        while (!q.empty())
        {
            int currentVertex = q.front();
            cout << currentVertex << " ";
            q.pop();

            for (auto neighbor : adjacencyList[currentVertex])
            {
                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
    }
};

int main()
{

    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";

    g.bfs(0);

    return 0;
}
