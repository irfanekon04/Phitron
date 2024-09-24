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
const int N = 2e4 + 5;
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
void unionSz(int u, int v)
{
    int root1 = find(u);
    int root2 = find(v);
    int sz1 = groupSz[root1];
    int sz2 = groupSz[root2];
    if (sz1 > sz2)
    {
        parent[root2] = root1;
        groupSz[root1] += groupSz[root2];
    }
    else
    {
        parent[root1] = root2;
        groupSz[root2] = root1;
    }
}
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

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
    ll totalWeight = 0;
    for (auto ed : edges)
    {
        int lu = find(ed.u);
        int lv = find(ed.v);
        if (lu != lv)
        {
            unionSz(ed.u, ed.v);
            totalWeight += ed.w;
        }
        else
        {
            continue;
        }
    }
    cout << totalWeight << endl;
}
