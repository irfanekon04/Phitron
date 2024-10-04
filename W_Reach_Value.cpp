#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
bool canReach(ll curVal)
{
    if (curVal > n)
        return false;
    if (curVal == n)
        return true;
    return canReach(curVal * 10) || canReach(curVal * 20);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (canReach(1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}