#include <bits/stdc++.h>
using namespace std;
pair<long long, long long> perfectBalancer(int n, const vector<int> &a)
{
    long long totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += a[i];
    }
    long long leftSum = 0;
    for (int i = 0; i < n; i++)
    {
        long long rightSum = totalSum - leftSum - a[i];
        if (leftSum == rightSum)
            return {a[i] + leftSum, i + 1};
        leftSum += a[i];
    }
    return {-1, -1};
}
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
    pair<long long, long long> result = perfectBalancer(n, a);
    if (result.first == -1)
    {
        cout << "UNSTABLE" << endl;
    }
    else
    {
        cout << result.first << " " << result.second << endl;
    }
    return 0;
}