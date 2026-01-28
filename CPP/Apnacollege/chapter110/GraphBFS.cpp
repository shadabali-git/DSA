#include <bits/stdc++.h>

using namespace std;

class GraphBFS
{
    int V;
    list<int> *l;

public:
    GraphBFS(int V)
    {
        this->V = V;
        l = new list<int>[V];
    }

    void addEdges(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    //  BfS   O( V+E );
    void bfs()
    {
        queue<int> Q;
        vector<bool> vis(V);

        Q.push(0);
        vis[0] = true;

        while (Q.size() > 0)
        {
            int u = Q.front();
            Q.pop();

            cout << u << " ";

            for (int v : l[u])
            {
                if (!vis[v])
                {
                    vis[v] = true;
                    Q.push(v);
                }
            }
        }

        cout << endl;
    }
};

int main()
{

    GraphBFS g(5);

    g.addEdges(0, 1);
    g.addEdges(1, 2);
    g.addEdges(2, 3);
    g.addEdges(3, 4);

    g.bfs();

    return 0;
}