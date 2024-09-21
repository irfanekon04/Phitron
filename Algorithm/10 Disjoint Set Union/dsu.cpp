#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int sz[N];
int level[N];
void dsuInit(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        sz[i] = 1;
        level[i] = 0;
    }
}
int dsuFind(int node)
{
    if (par[node] == -1)
        return node;
    int leader = dsuFind(par[node]);
    par[node] = leader;
    return leader;
}

//not optimized
void dsuUnion(int node1, int node2)
{
    int leaderA = dsuFind(node1);
    int leaderB = dsuFind(node2);
    par[leaderA] = leaderB;
}

//optimized
void dsuUnionLevel(int node1, int node2)
{
    int leaderA = dsuFind(node1);
    int leaderB = dsuFind(node2);
    if (level[leaderA] > level[leaderB])
    {
        par[leaderB] = leaderA;
    }
    else if (level[leaderB] > level[leaderA])
    {
        par[leaderA] = leaderB;
    }
    else{
        par[leaderA] = leaderB;
        level[leaderB]++;
    }
}
void dsuUnionSz(int node1, int node2)
{
    int leaderA = dsuFind(node1);
    int leaderB = dsuFind(node2);
    if (sz[leaderA] > sz[leaderB])
    {
        par[leaderB] = leaderA;
        sz[leaderA] += sz[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        sz[leaderB] += sz[leaderB];
    }
}
int main()
{
    dsuInit(7);
    dsuUnionLevel(1, 2);
    dsuUnionLevel(2, 3);
    dsuUnionLevel(4, 5);
    dsuUnionLevel(5, 6);
    dsuUnionLevel(1, 4);

    cout << dsuFind(1) << endl;
    cout << dsuFind(4) << endl;

    return 0;
}