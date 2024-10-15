#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
int vis[N];
int par[N];
void bfs(int src, int des)
{
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto child : adj[node])
        {
            if (vis[child] == 0)
            {
                q.push(child);
                vis[child] = 1;
                par[child] = node;
                if (child == des)
                {
                    vector<int> path;
                    while (child != src)
                    {
                        path.push_back(child);
                        child = par[child];
                    }
                    path.push_back(src);
                    reverse(path.begin(), path.end());
                    cout << path.size() << endl;
                    for (int x : path)
                    {
                        cout << x << " ";
                    }
                    cout << endl;
                    return;
                }
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1, n);
    return 0;
}