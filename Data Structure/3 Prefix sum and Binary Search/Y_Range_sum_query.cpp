#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    vector<long long> v1(n);
    v1[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        v1[i] = v1[i - 1] + v[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0)
            cout << v1[r] << endl;
        else
            cout << v1[r] - v1[l - 1] << endl;
    }
    return 0;
}