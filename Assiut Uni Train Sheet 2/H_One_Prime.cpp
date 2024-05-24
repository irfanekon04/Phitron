#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int flag = 1;
    if (x == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = 2; i < x; i++)
        {
            if ((x % i == 0))
            {
                flag = 0;
                break;
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