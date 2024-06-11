#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        auto it = find(v.begin(), v.end(), x);
        if (it != v.end())
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
    return 0;
}