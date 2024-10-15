#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int lgEven1 = -1, lgEven2 = -1, lgOdd1 = -1, lgOdd2 = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            if (v[i] > lgEven1)
            {
                lgEven2 = lgEven1;
                lgEven1 = v[i];
            }
            else if (v[i] > lgEven2)
            {
                lgEven2 = v[i];
            }
        }
        else
        {
            if (v[i] > lgOdd1)
            {
                lgOdd2 = lgOdd1;
                lgOdd1 = v[i];
            }
            else if (v[i] > lgOdd2)
            {
                lgOdd2 = v[i];
            }
        }
    }
    int maxOdd = -1;
    int maxEven = -1;
    if (lgOdd1 != -1 && lgOdd2 != -1)
    {
        maxOdd = lgOdd1 + lgOdd2;
    }
    if (lgEven1 != -1 && lgEven2 != -1)
    {
        maxEven = lgEven1 + lgEven2;
    }
    int ans = max({lgEven1, maxEven, maxOdd});
    cout << ans << endl;
    return 0;
}