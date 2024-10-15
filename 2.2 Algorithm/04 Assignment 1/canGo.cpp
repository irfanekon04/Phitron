#include <bits/stdc++.h>
using namespace std;
const int N = 10e3 + 5;
char a[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == '#')
    {
        return false;
    }
    return true;
}

void dfs(int ai, int aj)
{
    // cout << ai << " " << aj << endl;
    vis[ai][aj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = ai + d[i].first;
        int cj = aj + d[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            dfs(ci, cj);
        }
    }
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
    int ai, aj, bi, bj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'A')
            {
                ai = i;
                aj = j;
            }
            if (a[i][j] == 'B')
            {
                bi = i;
                bj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    dfs(ai, aj);
    if (vis[bi][bj])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}