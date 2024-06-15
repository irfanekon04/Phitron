#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a > 0 && b > 0)
        {
            int sum = 0;
            int mn, mx;
            if (a < b)
            {
                mn = a;
                mx = b;
            }
            else
            {
                mn = b;
                mx = a;
            }
            for (int i = mn; i <= mx; i++)
            {
                sum += i;
                cout << i << " ";
            }
            cout << "sum =" << sum << endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}