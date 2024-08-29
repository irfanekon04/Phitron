#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        set<int> s(v.begin(), v.end());
        for (int x : s)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}