#include <iostream>
#include <vector>
#include <list>
using namespace std;

// Graph is a digraph where each edge goes from i to j
class Graph
{
    int vertices;
    vector<list<int>> graph;
    vector<bool> visited;
public:
    Graph(int v = 10) : vertices(v)
    {
        graph.resize(v); // Create the array of v number of vertices
        visited.resize(v,false);
    }
    void insertEdge(int i, int j);
    void DFS(int s);
};

void Graph::insertEdge(int i, int j)
{
    graph[i].push_back(j);
}

void Graph::DFS(int s)
{
    // Mark the source node visited
    visited[s] = true;
    cout << s << " ";

    // For all the adjacent nodes check if they are visited and if not then recursively visit them.
    for(auto li : graph[s])
    {
        if(!visited[li])
        {
            DFS(li);
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
    g.DFS(1);
    return 0;
}