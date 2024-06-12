#include <bits/stdc++.h>
using namespace std;
vector<int> runningSum(vector<int> v, int n)
{
    vector<int> v1(n);
    v1[0] = v[0];
    for (int i = 1; i < v1.size(); i++)
    {
        v1[i] = v1[i - 1] + v[i];
    }
    return v1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    vector<int> v1 = runningSum(v, n);
    for (int x : v1)
    {
        cout << x << " ";
    }
    return 0;
}