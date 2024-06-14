#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long> v1(n);
    v1[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        v1[i] = v[i] + v1[i - 1];
    }
    reverse(v1.begin(), v1.end());
    for (long long x : v1)
    {
        cout << x << " ";
    }
    return 0;
}