#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int totalSum = 0, leftSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += v[i];
    }
    for (int i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - v[i];
        if (leftSum == rightSum)
        {
            cout << i << endl;
            break;
        }
        leftSum += v[i];
    }
    return 0;
}