#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool subsetSum(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
    {
        bool op1 = subsetSum(n - 1, a, s - a[n - 1]);
        bool op2 = subsetSum(n - 1, a, s);
        return dp[n][s] = op1 || op2;
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
    if (subsetSum(n, a, s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}