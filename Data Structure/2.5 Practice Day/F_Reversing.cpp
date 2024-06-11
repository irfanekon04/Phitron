#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    reverse(v.begin(), v.end());
    for (int x : v)
        cout << x << " ";

    return 0;
}