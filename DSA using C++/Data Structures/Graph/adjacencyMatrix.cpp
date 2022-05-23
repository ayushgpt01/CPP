#include <iostream>
using namespace std;

class Graph
{
    static const int vertices = 1e3;
    int graph[vertices][vertices];

public:
    Graph() : graph{0} {}
    void insertEdge(int i, int j);
    void removeEdge(int i, int j);
};

void Graph::insertEdge(int i, int j)
{
    graph[i][j] = 1;
    graph[j][i] = 1;
}

void Graph::removeEdge(int i, int j)
{
    graph[i][j] = 0;
    graph[j][i] = 0;
}

int main()
{
    Graph g;
    g.insertEdge(1,2);
    g.insertEdge(3,5);
    g.removeEdge(2,1);
    
    return 0;
}