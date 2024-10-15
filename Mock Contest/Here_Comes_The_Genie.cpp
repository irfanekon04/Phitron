#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());
    long long totalBalls = 0;
    int currMax = a[0];
    for (int i = 0; i < n; i++)
    {
        if (currMax <= 0)
        {
            break;
        }
        if (a[i] > currMax)
        {
            a[i] = currMax;
        }
        totalBalls += a[i];
        currMax = a[i] - 1;
    }
    cout << totalBalls << endl;
    return 0;
}