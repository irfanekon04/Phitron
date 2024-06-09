#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, r;
    cin >> s;
    int c1 = 0, c2 = 0;
    if (s.size() == 1)
    {
        cout << s << endl
             << "YES" << endl;
        return 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            c1++;
        else
            break;
    }
    s.erase(0, c1);
    r = s;
    reverse(r.begin(), r.end());
    for (int i = 0; i < r.size(); i++)
    {
        if (r[i] == '0')
            c2++;
        else
            break;
    }
    r.erase(0, c2);
    cout << r << endl;
    if (s == r)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}