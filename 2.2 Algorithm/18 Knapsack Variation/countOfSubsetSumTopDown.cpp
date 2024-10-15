#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int subsetSum(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
    {
        return dp[n][s] = subsetSum(n - 1, a, s - a[n - 1]) + subsetSum(n - 1, a, s);
    }
    else
    {
        return dp[n][s] = subsetSum(n - 1, a, s);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s;
    cin >> s;
    memset(dp, -1, sizeof(dp));
    cout << subsetSum(n, a, s);
    return 0;
}