#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
bool ans = false;
vector<int> adj[N];
int parentArr[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int child : adj[node])
        {
            if (vis[child] && parentArr[node] != child)
            {
                ans = true;
            }
            if (!vis[child])
            {
                vis[child] = true;
                parentArr[child] = node;
                q.push(child);
            }
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
            bfs(i);
        }
    }
    if (ans)
        cout << "Cycle Found!" << endl;
    else
        cout << "No Cycle Found!" << endl;
    return 0;
}