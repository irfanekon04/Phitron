#include <bits/stdc++.h>
using namespace std;

void findMinDiff(vector<int> &coins, int n, int idx, int currentSum, int count, int &minDiff, int totalSum, int halfCoins)
{
    if (count == halfCoins || (n % 2 != 0 && count == halfCoins + 1))
    {
        int otherSum = totalSum - currentSum;
        minDiff = min(minDiff, abs(currentSum - otherSum));
        return;
    }
    if (idx >= n)
    {
        return;
    }
    findMinDiff(coins, n, idx + 1, currentSum + coins[idx], count + 1, minDiff, totalSum, halfCoins);
    findMinDiff(coins, n, idx + 1, currentSum, count, minDiff, totalSum, halfCoins);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> coins(n);
        for (int i = 0; i < n; i++)
        {
            cin >> coins[i];
        }
        int totalSum = 0;
        for (int i = 0; i < n; i++)
        {
            totalSum += coins[i];
        }

        int halfCoins = n / 2;
        int minDiff = INT_MAX;
        findMinDiff(coins, n, 0, 0, 0, minDiff, totalSum, halfCoins);
        cout << minDiff << endl;
    }
    return 0;
}
