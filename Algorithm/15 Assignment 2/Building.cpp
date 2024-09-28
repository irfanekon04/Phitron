#include <bits/stdc++.h>
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
int find(int node)
{
    if (parent[node] == node)
    {
        return node;
    }
    int leader = find(parent[node]);
    parent[node] = leader;
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
        groupSz[leader1] += groupSz[leader2];
    }
    else
    {
        parent[leader1] = leader2;
        groupSz[leader2] += groupSz[leader1];
    }
}
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsuInit(n);
    vector<Edge> edges;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(Edge(u, v, w));
    }
    sort(edges.begin(), edges.end(), cmp);
    long long totalCost = 0;
    int edgeUsed = 0;
    for (Edge edge : edges)
    {
        int leaderU = find(edge.u);
        int leaderV = find(edge.v);
        if (leaderU != leaderV)
        {
            unionSz(edge.u, edge.v);
            totalCost += edge.w;
            edgeUsed++;
        }
    }
    if (edgeUsed == n - 1)
    {
        cout << totalCost << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}