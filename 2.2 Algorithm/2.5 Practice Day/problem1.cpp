#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool visited[1005];
int level[1005];
int parent[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (auto child : v[p])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[p] + 1;
                parent[child] = p;
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
    int query;
    cin >> query;
    while (query--)
    {
        memset(visited, false, sizeof(visited));
        memset(level, -1, sizeof(level));
        memset(parent, -1, sizeof(parent));
        int src, des;
        cin >> src >> des;
        bfs(src);
        if (level[des] != -1)
            cout << level[des] << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}