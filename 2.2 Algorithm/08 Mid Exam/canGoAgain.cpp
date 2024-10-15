#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Edge
{
public:
    int u, v;
    ll c;
    Edge(int u, int v, ll c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const ll INF = 1e18;
const int N = 1e3 + 5;
vector<Edge> edgeList;
ll dis[N];

bool bFord(int src, int n)
{
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    dis[src] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (Edge ed : edgeList)
        {
            int u, v;
            ll c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < INF && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    for (Edge ed : edgeList)
    {
        int u, v;
        ll c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        if (dis[u] < INF && dis[u] + c < dis[v])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int u, v;
        ll c;
        cin >> u >> v >> c;
        edgeList.push_back(Edge(u, v, c));
    }
    int source;
    cin >> source;
    int t;
    cin >> t;
    bool cycle = bFord(source, n);
    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        while (t--)
        {
            int des;
            cin >> des;
            if (dis[des] == INF)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[des] << endl;
            }
        }
    }

    return 0;
}