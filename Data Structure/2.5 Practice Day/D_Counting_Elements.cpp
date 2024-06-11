#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        auto val = find(v.begin(), v.end(), v[i] + 1);
        if (val != v.end())
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}