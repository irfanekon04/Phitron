#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
char a[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && a[i][j] == '.' && !vis[i][j]);
}

int dfs(int si, int sj)
{
    vis[si][sj] = true;
    int area = 1;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj))
        {
            area += dfs(ci, cj);
        }
    }
    return area;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    int minArea = INT_MAX;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && !vis[i][j])
            {
                flag = true;
                int area = dfs(i, j);
                minArea = min(minArea, area);
            }
        }
    }
    if (flag)
    {
        cout << minArea << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}