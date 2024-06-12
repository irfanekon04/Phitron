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
    sort(v.begin(), v.end());
    while (q--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == x)
            {
                flag = true;
                break;
            }

            if (v[mid] < x)
            {
                l = mid + 1;
            }

            else
            {
                r = mid - 1;
            }
        }
        if (flag == true)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }

    return 0;
}