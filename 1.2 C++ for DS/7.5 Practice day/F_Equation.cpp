#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n;
    cin >> x >> n;
    double sum = 0;
    int i = 2;
    while (i <= n)
    {
        sum += pow(x * 1.0, i * 1.0);
        i += 2;
    }
    cout << int(sum) << endl;
    return 0;
}
