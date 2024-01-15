#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int src, dest, weight;

    Edge(int source, int destination, int w) : src(source), dest(destination), weight(w) {}

    bool operator<(const Edge &other) const
    {
        return weight < other.weight;
    }
};

class Graph
{
private:
    int V;
    vector<Edge> edges;

public:
    Graph(int vertices) : V(vertices) {}

    void addEdge(int u, int v, int weight)
    {
        edges.emplace_back(u, v, weight);
    }

    int findSet(vector<int> &parent, int i)
    {
        if (parent[i] == -1)
            return i;
        return findSet(parent, parent[i]);
    }

    void unionSets(vector<int> &parent, int x, int y)
    {
        int xRoot = findSet(parent, x);
        int yRoot = findSet(parent, y);
        parent[xRoot] = yRoot;
    }

    void kruskalMST()
    {
        sort(edges.begin(), edges.end());

        vector<int> parent(V, -1);

        cout << "Minimum Spanning Tree:" << endl;
        for (const Edge &edge : edges)
        {
            int x = findSet(parent, edge.src);
            int y = findSet(parent, edge.dest);

            if (x != y)
            {
                cout << "Edge: " << edge.src << " - " << edge.dest << "   Weight: " << edge.weight << endl;
                unionSets(parent, x, y);
            }
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
    g.kruskalMST();

    return 0;
}
