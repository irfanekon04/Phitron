#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
int countSubSum(int n, int a[], int s)
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
        return dp[n][s] = countSubSum(n - 1, a, s - a[n - 1]) + countSubSum(n - 1, a, s);
    else
        return dp[n][s] = countSubSum(n - 1, a, s);
}
int main()
{
    int n;
    cin >> n;
    int a[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int s;
    cin >> s;
    int s1 = (sum + s) / 2;
    memset(dp, -1, sizeof(dp));
    if (s1 % 2 == 0)
    {
        cout << countSubSum(n, a, s1) << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}