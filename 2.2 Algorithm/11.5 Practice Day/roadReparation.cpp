#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
const int N = 1e5 + 5;
int parent[N];
int groupSz[N];
void dsuInit(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        groupSz[i] = 1;
    }
}
int find(int x)
{
    if (parent[x] == x)
        return x;
    int leader = find(parent[x]);
    parent[x] = leader;
    return leader;
}
void unionSz(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    int sz1 = groupSz[leader1];
    int sz2 = groupSz[leader2];
    if (sz1 > sz2)
    {
        parent[leader2] = leader1;
        sz1 += sz2;
    }
    else
    {
        parent[leader1] = leader2;
        sz2 += sz1;
    }
}
bool comp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    int n, m;
    cin >> n >> m;
    dsuInit(n);
    vector<Edge> edges;
    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(Edge(u, v, w));
    }
    sort(edges.begin(), edges.end(), comp);
    ll totalCost = 0;
    for (Edge ed : edges)
    {
        int leaderU = find(ed.u);
        int leaderV = find(ed.v);
        if (leaderU != leaderV)
        {
            unionSz(ed.u, ed.v);
            totalCost += ed.w;
        }
        else
        {
            continue;
        }
    }
    int leader = find(1);
    for (int i = 2; i <= n; i++)
    {
        if (find(i) != leader)
        {
            cout << "IMPOSSIBLE" << endl;
            return 0;
        }
    }
    cout << totalCost << endl;
    return 0;
}