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
        string s;
        cin >> s;
        int frq[26] = {0};
        int ans = 0;
        for (char c : s)
        {
            frq[c - 'A']++;
            if (frq[c - 'A'] == 1)
                ans += 2;
            else if (frq[c - 'A'] > 1)
                ans += 1;
        }
        cout << ans << endl;
    }

    return 0;
}