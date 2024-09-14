#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> kMoves = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
int n, m;

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}
int bfs(int ki, int kj, int qi, int qj)
{
    bool vis[n][m];
    int dis[n][m];
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    queue<pair<int, int>> q;
    q.push({ki, kj});
    dis[ki][kj] = 0;
    vis[ki][kj] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        if (a == qi && b == qj)
        {
            return dis[a][b];
        }
        for (pair<int, int> move : kMoves)
        {
            int ci = a + move.first;
            int cj = b + move.second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
                q.push({ci, cj});
            }
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int ki, kj;
        cin >> ki >> kj;
        int qi, qj;
        cin >> qi >> qj;

        int result = bfs(ki, kj, qi, qj);
        cout << result << endl;
    }
    return 0;
}