#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int old_val, new_val;
    cin >> old_val >> new_val;
    int find_val;
    cin >> find_val;

    replace(v.begin(), v.end(), old_val, new_val);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    auto found = find(v.begin(), v.end(), find_val);
    if (found != v.end())
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == *found)
            {
                cout << i << endl;
                break;
            }
        }
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}