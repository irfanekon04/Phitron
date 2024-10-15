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

        int sum;
        int j, k, l;
        int flag = 0;
        for (j = 0; j < n - 2; j++)
        {
            for (k = j + 1; k < n - 1; k++)
            {
                for (l = k + 1; l < n; l++)
                {
                    sum = a[j] + a[k] + a[l];
                    if (sum == s)
                    {
                        flag = 1;
                        break;
                    }
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