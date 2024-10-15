#include <bits/stdc++.h>
using namespace std;
int const N = 1e3 + 5;
int dp[N][N];
bool subSum(int n, int a[], int s)
{
    if (n == 0)
        return s == 0;
    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
    {
        return dp[n][s] = subSum(n - 1, a, s - a[n - 1]) || subSum(n - 1, a, s);
    }
    else
    {
        return dp[n][s] = subSum(n - 1, a, s);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, target;
        cin >> n >> target;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int s = 1000 - target;
        if (s == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        memset(dp, -1, sizeof(dp));
        if (subSum(n, a, s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}