#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[4];
    int *b = new int[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    delete[] a;
    a = new int[6];
    for (int i = 0; i < 4; i++)
    {
        a[i] = b[i];
    }
    delete[] b;
    a[4] = 69;
    a[5] = 96;
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}