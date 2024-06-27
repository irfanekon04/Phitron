#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    bool isDuplicate = false;
    for (int i = 0; i < n - 1; i++)
    {
        int target = a[i];
        int l = i + 1;
        int r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (target == a[mid])
            {
                isDuplicate = true;
                break;
            }
            else if (target > a[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        // for (int j = i + 1; j < n; j++)
        // {
        //     if (a[i] == a[j])
        //     {
        //         isDuplicate = true;
        //         break;
        //     }
        // }
    }
    if (isDuplicate != true)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}