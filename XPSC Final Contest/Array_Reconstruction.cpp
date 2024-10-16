#include <bits/stdc++.h>
using namespace std;
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
        vector<long long> a(n - 2);
        long long sum = 0;
        for (int i = 0; i < n - 2; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        long long sum1;
        cin >> sum1;
        long long ans = sum1 - sum;
        if (ans < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans + 1 << endl;
        }
    }
    return 0;
}