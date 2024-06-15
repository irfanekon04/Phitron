#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int mn, mx;
        if (x < y)
        {
            mn = x;
            mx = y;
        }
        else
        {
            mn = y;
            mx = x;
        }
        int sum = 0;
        for (int i = mn + 1; i < mx; i++)
        {
            if (i % 2 == 1)
            {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}