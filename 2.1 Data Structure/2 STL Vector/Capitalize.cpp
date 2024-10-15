#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    for (string x : v)
    {
        x[0] = x[0] - 32;
        cout << x << endl;
    }
    // for (string x : v)
    // {
    //     cout << x << endl;
    // }
    return 0;
}