#include <iostream>
#include <vector>
#include <list>
using namespace std;

// Graph is a digraph where each edge goes from i to j
class Graph
{
    int vertices;
    vector<list<int>> graph;

public:
    Graph(int v = 10) : vertices(v)
    {
        graph.resize(v); // Create the array of v number of vertices
    }
    void insertEdge(int i, int j);
    void BFS(int s);
};

void Graph::insertEdge(int i, int j)
{
    graph[i].push_back(j);
}

void Graph::BFS(int s)
{
    // vector to keep track of visited nodes
    vector<bool> visited;
    visited.resize(vertices, false);
    // queue for BFS Transversal
    list<int> visitQ;
    // Push the source element onto the queue and mark transversed
    visited[s] = true;
    visitQ.push_back(s);

    while (!visitQ.empty())
    {
        // Display the node in the front of queue.
        s = visitQ.front();
        cout << s << " ";
        visitQ.pop_front();

        for (auto adjnode : graph[s])
        {
            // For each adjacent node check if its visited already
            if (!visited[adjnode])
            {
                // If not visited then visit the node and add it to the queue
                visited[adjnode] = true;
                visitQ.push_back(adjnode);
            }
        }
    }
}

int main()
{
    Graph g;
    g.insertEdge(5,1);
    g.insertEdge(2,3);
    g.insertEdge(1,2);
    g.insertEdge(6,7);
    g.insertEdge(2,6);
    g.insertEdge(7,5);
    g.BFS(1);
    return 0;
}