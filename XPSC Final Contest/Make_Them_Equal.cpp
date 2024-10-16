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
        int N, K;
        cin >> N >> K;
        string a, b;
        cin >> a >> b;
        int cnt1 = 0;
        for (int i = 0; i < N; i++)
        {
            if (a[i] != b[i])
            {
                cnt1++;
            }
        }
        if (cnt1 <= K)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}