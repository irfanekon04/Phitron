#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
int si, sj, bi, bj;
char a[N][N];
char par[N][N];
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == '#')
        return false;
    return true;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        int a = p.first, b = p.second;
        q.pop();
        if (a == bi && b == bj) // Stop the BFS once we've found the destination
            return;
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                if (i == 0)
                    par[ci][cj] = 'R';
                if (i == 1)
                    par[ci][cj] = 'L';
                if (i == 2)
                    par[ci][cj] = 'U';
                if (i == 3)
                    par[ci][cj] = 'D';

                q.push({ci, cj});
            }
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            if (a[i][j] == 'B')
            {
                bi = i;
                bj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    memset(par, '.', sizeof(par));
    bfs(si, sj);
    if (vis[bi][bj])
    {
        cout << "YES" << endl;
        string path = "";
        while (bi != si || bj != sj)
        {
            char move = par[bi][bj];
            path += move;
            if (move == 'R')
            {
                bj--;
            }
            else if (move == 'L')
            {
                bj++;
            }
            else if (move == 'U')
            {
                bi++;
            }
            else if (move == 'D')
            {
                bi--;
            }
        }
        reverse(path.begin(), path.end());
        cout << path.size() << endl;
        cout << path << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}