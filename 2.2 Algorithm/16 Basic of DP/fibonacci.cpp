#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dp[N];
int fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    if (dp[n] != -1)
        return dp[n];
    int ans = fib(n - 1) + fib(n - 2);
    dp[n] = ans;
    return ans;
}
int main()
{
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << fib(n) << endl;
    
    return 0;
}