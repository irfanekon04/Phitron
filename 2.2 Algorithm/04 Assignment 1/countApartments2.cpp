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

void bfs(int x, int y, int &count)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = true;
    count++;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
                count++;
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
    memset(vis, false, sizeof(vis));
    vector<int> rCount;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && !vis[i][j])
            {
                int room = 0;
                bfs(i, j, room);
                rCount.push_back(room);
            }
        }
    }
    if (rCount.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        sort(rCount.begin(), rCount.end());
        for (int z : rCount)
        {
            cout << z << " ";
        }
    }
    return 0;
}