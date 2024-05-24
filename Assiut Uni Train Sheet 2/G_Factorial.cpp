#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        long long int fact = 1;
        for (int j = 1; j <= n; j++)
        {
            fact = fact * j;
        }
        cout << fact << endl;
    }

    return 0;
}