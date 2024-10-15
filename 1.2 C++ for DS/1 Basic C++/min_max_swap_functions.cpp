#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
    int n, m, a, b;
    // minimum
    cin >> n >> m;
    int mn = min(n, m);
    cout << "min " << mn << endl;

    // min more than 2 values
    cin >> n >> m >> a >> b;
    int mn1 = min({n, m, a, b});
    cout << "min " << mn1 << endl;

    // maximum
    cin >> n >> m;
    int mx = max(n, m);
    cout << "max " << mx << endl;

    // max more than 2 values
    cin >> n >> m >> a >> b;
    int mx1 = max({n, m, a, b});
    cout << "max " << mx1 << endl;

    // swap
    cin >> n >> m;
    swap(n, m);
    cout << "swapped " << n << " " << m << endl;
    return 0;
}