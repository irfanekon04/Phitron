#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll dp[100005];
bool makeIt(ll val)
{
    if (val > n)
        return false;
    if (val == n)
        return true;
    if (dp[val] != -1)
        return dp[val];
    return dp[val] = makeIt(val + 3) || makeIt(val * 2);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(dp, -1, sizeof(dp));
        if (makeIt(1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}