#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph
{
    int vertices;
    vector<list<pair<int, int>>> graph;

public:
    Graph(int v = 10) : vertices(v)
    {
        graph.resize(v);
    }
    void insertEdge(int i, int j, int wt);
    void removeEdge(int i, int j, int wt);
};

void Graph::insertEdge(int i, int j, int wt)
{
    graph[i].push_back({j, wt});
    graph[j].push_back({i, wt});
}

void Graph::removeEdge(int i, int j, int wt)
{
    graph[i].remove({j, wt});
    graph[j].remove({i, wt});
}

int main()
{
    Graph g;
    g.insertEdge(1, 2, 7);
    g.insertEdge(3, 5, 8);
    g.removeEdge(1, 2, 0);
    return 0;
}