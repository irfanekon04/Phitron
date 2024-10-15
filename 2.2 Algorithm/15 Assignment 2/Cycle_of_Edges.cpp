#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int groupSize[N];
void dsuInit(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        groupSize[i] = 1;
    }
}
int find(int node)
{
    if (parent[node] == node)
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
        groupSize[leader1] += groupSize[leader2];
    }
    else
    {
        parent[leader1] = leader2;
        groupSize[leader2] += groupSize[leader1];
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsuInit(n);
    int cycleCount = 0;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int l1 = find(a);
        int l2 = find(b);
        if (l1 == l2)
        {
            cycleCount++;
        }
        else
        {
            unionSz(a, b);
        }
    }
    cout << cycleCount << endl;
    return 0;
}