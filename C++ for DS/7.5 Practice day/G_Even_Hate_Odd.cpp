#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        int evn = 0;
        int ans;
        if (n % 2 == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] % 2 == 0)
                {
                    evn++;
                }
            }
            ans = abs(evn - (n / 2));
            cout << ans << endl;
        }
    }
    return 0;
}