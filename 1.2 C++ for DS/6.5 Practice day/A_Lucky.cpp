#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int a = s[0] + s[1] + s[2];
        int b = s[3] + s[4] + s[5];
        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}