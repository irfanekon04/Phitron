#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if (n == 0)
        return 1;
    int cfact = fact(n - 1);
    return cfact * n;
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}