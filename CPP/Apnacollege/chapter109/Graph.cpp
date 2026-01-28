#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int V)
    {

        this->V = V;
        l = new list<int>[V];
    }
    void addEdges(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print()
    {

        for (int i = 0; i < V; i++)
        {
            cout << i << " ";
            for (int val : l[i])
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }
};

int main()
{

    Graph g(5);

    g.addEdges(0, 1);
    g.addEdges(1, 2);
    g.addEdges(2, 3);
    g.addEdges(3, 4);

    g.print();

    return 0;
}