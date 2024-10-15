#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
bool pathVis[N];
bool ans = false;
vector<int> adj[N];

void dfs(int s)
{
    vis[s] = true;
    pathVis[s] = true;
    for (int child : adj[s])
    {
        if (pathVis[child])
        {
            ans = true;
        }
        if (!vis[child])
        {
            dfs(child);
        }
    }
    pathVis[s] = false;
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    memset(vis, false, sizeof(vis));
    memset(pathVis, false, sizeof(pathVis));
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if (ans)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}