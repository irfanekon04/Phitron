#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool isPrime = false;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = true;
                break;
            }
            else
            {
                isPrime = false;
            }
        }
        if (isPrime != true)
        {
            cout << i << " ";
        }
    }

    return 0;
}