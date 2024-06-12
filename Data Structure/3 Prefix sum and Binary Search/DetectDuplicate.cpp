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
    int x;
    cin >> x;
    int l = 0, r = n - 1;
    bool flag = false;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (x == v[mid])
        {
            if (mid > 0 && v[mid - 1] == x || mid < n - 1 && v[mid + 1] == x)
            {
                flag = true;
                break;
            }
            else
            {
                break;
            }
        }
        if (x > v[mid])
        {
            l = mid + 1;
        }
        else if (x < v[mid])
        {
            r = mid - 1;
        }
    }
    if (flag == true)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}