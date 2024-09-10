#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
bool ans = false;
vector<int> adj[N];
int parentArr[N];

void dfs(int s)
{
    vis[s] = true;
    for (int child : adj[s])
    {
        if (vis[child] && child != parentArr[s])
        {
            ans = true;
        }
        if (!vis[child])
        {
            parentArr[child] = s;
            dfs(child);
        }
    }
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
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parentArr, -1, sizeof(parentArr));
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if (ans)
        cout << "Cycle Found!" << endl;
    else
        cout << "No Cycle Found!" << endl;
    return 0;
}