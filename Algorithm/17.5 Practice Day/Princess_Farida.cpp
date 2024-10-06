#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[10000];
ll knapsack(int n, int arr[])
{
    if (n < 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    ll op1 = arr[n] + knapsack(n - 2, arr);
    ll op2 = knapsack(n - 1, arr);
    return dp[n] = max(op1, op2);
}
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        memset(dp, -1, sizeof(dp));
        cout << "Case " << k << ": " << knapsack(n - 1, arr) << endl;
    }
    return 0;
}