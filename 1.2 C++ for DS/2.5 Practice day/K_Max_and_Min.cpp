#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, mn, mx;
    cin >> a >> b >> c;
    mn = min({a, b, c});
    mx = max({a, b, c});
    cout << mn << " " << mx;
    return 0;
}