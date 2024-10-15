#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int groupSize[N];
void dsuInit(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        groupSize[i] = 1;
    }
}
int find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = find(parent[node]);
    parent[node] = leader;
    return leader;
}
void unionSz(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    int sz1 = groupSize[leader1];
    int sz2 = groupSize[leader2];
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
int main()
{
    int n, e;
    cin >> n >> e;
    dsuInit(n);
    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int l1 = find(a);
        int l2 = find(b);
        if (l1 == l2)
        {
            cycle = true;
        }
        else
        {
            unionSz(a, b);
        }
    }
    if (cycle)
    {
        cout << "found" << endl;
    }
    else{
        cout << "not found" << endl;
    }
    return 0;
}