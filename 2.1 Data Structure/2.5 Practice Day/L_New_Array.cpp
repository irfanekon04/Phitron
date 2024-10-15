#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);

    for (int i = 0; i < v1.size(); i++)
    {
        cin >> v1[i];
    }

    vector<int> v(n);
    for (int i = 0; i < v1.size(); i++)
    {
        cin >> v[i];
    }
    vector<int> v2(v);

    v2.insert(v2.end(), v1.begin(), v1.end());

    for (int x : v2)
    {
        cout << x << " ";
    }
    return 0;
}