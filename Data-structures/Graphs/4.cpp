#include <bits/stdc++.h>
using namespace std;

const int INF = numeric_limits<int>::max();

void dijkstra(const vector<vector<int>> &graph, int startNode, int numNodes)
{
    vector<int> distance(numNodes, INF);
    vector<bool> visited(numNodes, false);

    distance[startNode] = 0;

    for (int i = 0; i < numNodes - 1; ++i)
    {
        int minDist = INF, minIndex = -1;

        for (int j = 0; j < numNodes; ++j)
        {
            if (!visited[j] && distance[j] < minDist)
            {
                minDist = distance[j];
                minIndex = j;
            }
        }

        if (minIndex == -1)
            break;

        visited[minIndex] = true;

        for (int j = 0; j < numNodes; ++j)
        {
            if (!visited[j] && graph[minIndex][j] != INF && distance[minIndex] + graph[minIndex][j] < distance[j])
            {
                distance[j] = distance[minIndex] + graph[minIndex][j];
            }
        }
    }

    for (int i = 0; i < numNodes; ++i)
    {
        cout << "Distance from node " << startNode << " to node " << i << ": ";
        if (distance[i] == INF)
        {
            cout << "INF" << endl;
        }
        else
        {
            cout << distance[i] << endl;
        }
    }
}

int main()
{
    const int numNodes = 6;
    const vector<vector<int>> graph = {
        {0, 1, 4, INF, INF, INF},
        {1, 0, 4, 2, 7, INF},
        {4, 4, 0, 3, 5, INF},
        {INF, 2, 3, 0, 4, 6},
        {INF, 7, 5, 4, 0, 7},
        {INF, INF, INF, 6, 7, 0}};

    int startNode = 0;
    dijkstra(graph, startNode, numNodes);

    return 0;
}
