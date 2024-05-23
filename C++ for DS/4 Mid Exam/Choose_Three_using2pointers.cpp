#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        sort(a, a + n);
        int sum;
        int j, k, l;
        int flag = -1;
        for (j = 0; j < n - 2; j++)
        {
            k = j + 1;
            l = n - 1;
            while (k < l)
            {
                sum = a[j] + a[k] + a[l];
                if (sum == s)
                {
                    flag = 1;
                    break;
                }
                else if (sum < s)
                {
                    k++;
                }
                else if (sum > s)
                {
                    l--;
                }
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}