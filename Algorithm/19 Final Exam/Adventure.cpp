#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int maxN = 1005;
const int maxW = 1005;
int dp[maxN][maxW];
int knapsack(int n, int weight[], int value[], int w)
{
    if (n == 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];
    if (weight[n - 1] <= w)
    {
        int c1 = knapsack(n - 1, weight, value, w - weight[n - 1]) + value[n - 1];
        int c2 = knapsack(n - 1, weight, value, w);
        return dp[n][w] = max(c1, c2);
    }
    else
    {
        return dp[n][w] = knapsack(n - 1, weight, value, w);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int weight[n], value[n];
        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> value[i];
        }
        memset(dp, -1, sizeof(dp));
        cout << knapsack(n, weight, value, w) << endl;
    }
    return 0;
}