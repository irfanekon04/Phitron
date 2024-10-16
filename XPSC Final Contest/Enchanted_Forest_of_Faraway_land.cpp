#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> tree;
vector<map<int, int>> values;
vector<int> parent, depth;
void dfs(int node, int par, int dep)
{
    parent[node] = par;
    depth[node] = dep;
    for (auto neighbor : tree[node])
    {
        if (neighbor != par)
        {
            dfs(neighbor, node, dep + 1);
        }
    }
}
int find(int u, int v)
{
    while (u != v)
    {
        if (depth[u] > depth[v])
        {
            u = parent[u];
        }
        else
        {
            v = parent[v];
        }
    }
    return u;
}
vector<int> findPathValues(int u, int v)
{
    vector<int> pathValues;
    int lca = find(u, v);
    while (u != lca)
    {
        for (auto &val : values[u])
        {
            pathValues.push_back(val.first);
        }
        u = parent[u];
    }
    vector<int> tmp;
    while (v != lca)
    {
        for (auto &val : values[v])
        {
            tmp.push_back(val.first);
        }
        v = parent[v];
    }
    for (auto &val : values[lca])
    {
        pathValues.push_back(val.first);
    }
    reverse(tmp.begin(), tmp.end());
    for (int val : tmp)
    {
        pathValues.push_back(val);
    }
    return pathValues;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    tree.resize(n + 1);
    values.resize(n + 1);
    parent.resize(n + 1);
    depth.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1, -1, 0);
    int q;
    cin >> q;
    while (q--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "insert")
        {
            int u, x;
            cin >> u >> x;
            values[u][x]++;
        }
        else if (cmd == "delete")
        {
            int u, x;
            cin >> u >> x;
            if (values[u].count(x))
            {
                values[u][x]--;
                if (values[u][x] == 0)
                {
                    values[u].erase(x);
                }
            }
        }
        else if (cmd == "find")
        {
            int u, v, k;
            cin >> u >> v >> k;
            vector<int> pathValues = findPathValues(u, v);
            sort(pathValues.begin(), pathValues.end());
            if (k <= pathValues.size())
            {
                cout << pathValues[k - 1] << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}