#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
bool vis[N][N];
pair<int, int> parent[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int n, m;
char a[N][N];
bool flag = false;
bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && (a[i][j] == '.' || a[i][j] == 'D'));
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        if (a[par.first][par.second] == 'D')
        {
            flag = true;
            while (par.first != si || par.second != sj)
            {
                if (a[par.first][par.second] != 'R' && a[par.first][par.second] != 'D')
                {
                    a[par.first][par.second] = 'X';
                }
                par = parent[par.first][par.second];
            }
            return;
        }
        for (int i = 0; i < 4; i++)
        {
            int ci = par.first + d[i].first;
            int cj = par.second + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                parent[ci][cj] = {par.first, par.second};
                q.push({ci, cj});
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    int si, sj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    bfs(si, sj);
    if (flag)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}