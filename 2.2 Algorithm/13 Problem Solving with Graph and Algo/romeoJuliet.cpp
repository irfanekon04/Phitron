#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
int dis[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    dis[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : v[par])
        {
            if (!vis[child])
            {
                vis[child] = true;
                dis[child] = dis[par] + 1;
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    int src, des, k;
    cin >> src >> des >> k;
    bfs(src);
    if (dis[des] != -1 && dis[des] <= k * 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}