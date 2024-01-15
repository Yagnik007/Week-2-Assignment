#include <bits/stdc++.h>
using namespace std;

const int INF = INT_MAX;

class Graph
{
private:
    int V;
    vector<vector<int>> adjMatrix;

public:
    Graph(int vertices) : V(vertices)
    {
        adjMatrix.resize(V, vector<int>(V, INF));
    }

    void addEdge(int u, int v, int weight)
    {
        adjMatrix[u][v] = adjMatrix[v][u] = weight;
    }

    void primMST()
    {
        vector<bool> inMST(V, false);
        vector<int> key(V, INF);
        vector<int> parent(V, -1);

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        int startNode = 0;

        pq.push({0, startNode});
        key[startNode] = 0;

        while (!pq.empty())
        {
            int u = pq.top().second;
            pq.pop();

            inMST[u] = true;

            for (int v = 0; v < V; ++v)
            {
                if (adjMatrix[u][v] != INF && !inMST[v] && adjMatrix[u][v] < key[v])
                {
                    key[v] = adjMatrix[u][v];
                    parent[v] = u;
                    pq.push({key[v], v});
                }
            }
        }

        cout << "Minimum Spanning Tree:" << endl;
        for (int i = 1; i < V; ++i)
        {
            cout << "Edge: " << parent[i] << " - " << i << "   Weight: " << key[i] << endl;
        }
    }
};

int main()
{
    Graph g(5);

    g.addEdge(0, 1, 2);
    g.addEdge(0, 3, 6);
    g.addEdge(1, 2, 3);
    g.addEdge(1, 3, 8);
    g.addEdge(1, 4, 5);
    g.addEdge(2, 4, 7);
    g.addEdge(3, 4, 9);

    g.primMST();

    return 0;
}
