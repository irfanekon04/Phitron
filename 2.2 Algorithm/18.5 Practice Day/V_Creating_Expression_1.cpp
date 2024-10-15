#include <bits/stdc++.h>
using namespace std;
int const N = 1e5;
int dp[100][N];
bool subSum(int n, int a[], long long s)
{
    if (n == 0)
    {
        if (s == 0)
            return 1;
        else
            return 0;
    }
    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
        return dp[n][s] = subSum(n - 1, a, s - a[n - 1]) || subSum(n - 1, a, s);
    else
        return dp[n][s] = subSum(n - 1, a, s);
}
int main()
{
    int n, s;
    int sum = 0;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if ((sum + s) % 2 != 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    long long s1 = (sum + s) / 2;
    memset(dp, -1, sizeof(dp));
    if (subSum(n, a, s1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
