#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];
void bfs(int s, vector<int> &c)
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    c.push_back(s);
    while (!q.empty())
    {
        int y = q.front();
        q.pop();
        for (int x : adj[y])
        {
            if (!visited[x])
            {
                q.push(x);
                visited[x] = true;
                c.push_back(x);
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>> comp;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            vector<int> c;
            bfs(i, c);
            comp.push_back(c);
        }
    }
    int k = comp.size() - 1;
    cout << k << endl;
    for (int i = 0; i < k; i++)
    {
        cout << comp[i].back() << " " << comp[i + 1].front() << endl;
    }
    return 0;
}