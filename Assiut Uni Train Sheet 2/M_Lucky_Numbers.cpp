#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    bool flag2 = false;
    for (int i = a; i <= b; i++)
    {
        int x = i;
        bool flag = false;
        while (x > 0)
        {
            int y = x % 10;
            if (y != 4 && y != 7)
            {
                flag = true;
            }
            x /= 10;
        }
        if (!flag)
        {
            cout << i << " ";
            flag2 = true;
        }
    }
    if (!flag2)
        cout << -1;
    return 0;
}