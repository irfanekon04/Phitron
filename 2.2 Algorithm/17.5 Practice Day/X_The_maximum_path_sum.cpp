#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 15;
ll a[N][N];
int n, m;

int maxSum(int i, int j)
{
    if (i == n && j == m)
        return a[i][j];
    if (i == n)
        return a[i][j] + maxSum(i, j + 1);
    if (j == m)
        return a[i][j] + maxSum(i + 1, j);

    ll ans1 = a[i][j] + maxSum(i + 1, j);
    ll ans2 = a[i][j] + maxSum(i, j + 1);
    return max(ans1, ans2);
}
int main()
{

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << maxSum(1, 1);
    return 0;
}