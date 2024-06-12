#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int a1[n];
    a1[0] = 0;

    for (int i = 1; i < n; i++)
    {

        a1[i] = a1[i - 1] + a[i - 1];
    }
    for (int x : a1)
    {
        cout << x << " ";
    }
    return 0;
}