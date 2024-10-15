#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll INF = 1e18;
const int N = 1e2 + 5;
ll dis[N][N];
void floyd(int n)
{
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (dis[i][k] < INF && dis[k][j] < INF)
                {
                    if (dis[i][k] + dis[k][j] < dis[i][j])
                    {
                        dis[i][j] = dis[i][k] + dis[k][j];
                    }
                }
            }
        }
    }
}
int main()
{
    ll n, e;
    cin >> n >> e;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dis[i][j] = INF;
            if (i == j)
            {
                dis[i][j] = 0;
            }
        }
    }
    while (e--)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        if (dis[a][b]>c)
        {
            dis[a][b] = c;
        }
    }
    floyd(n);
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (dis[x][y] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dis[x][y] << endl;
        }
    }
    return 0;
}