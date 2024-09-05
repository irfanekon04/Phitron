#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool visited[1005];
int level[1005];
int parent[1005];
vector<int> levelNodes[1005];
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
                levelNodes[level[child]].push_back(child);
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
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    bfs(0);
    int L;
    cin >>L;
    sort(levelNodes[L].rbegin(), levelNodes[L].rend());
    for (auto node : levelNodes[L])
    {
        cout << node << " ";
    }
    return 0;
}