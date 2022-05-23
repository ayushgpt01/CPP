#include <iostream>
#include <vector>
#include <list>
using namespace std;

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
    void removeEdge(int i, int j);
};

void Graph::insertEdge(int i, int j)
{
    graph[i].push_back(j);
    graph[j].push_back(i);
}

void Graph::removeEdge(int i, int j)
{
    graph[i].remove(j);
    graph[j].remove(i);
}

int main()
{
    Graph g;
    g.insertEdge(1, 2);
    g.insertEdge(3, 5);
    g.removeEdge(1, 2);
    return 0;
}