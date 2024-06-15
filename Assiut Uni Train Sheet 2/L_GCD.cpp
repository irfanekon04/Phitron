#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int mn = min(a, b);
    int gcd;
    for (int i = 1; i <= mn; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd;
    // vector<int> v;
    // vector<int> v1;
    // for (int i = 0; i < a; i++)
    // {
    //     if (a % (i + 1) == 0)
    //     {
    //         v.push_back(a / (i + 1));
    //     }
    // }
    // for (int i = 0; i < b; i++)
    // {
    //     if (b % (i + 1) == 0)
    //     {
    //         v1.push_back(b / (i + 1));
    //     }
    // }
    // int sz;
    // if (v.size() > v1.size())
    // {
    //     sz = v.size();
    // }
    // else
    // {
    //     sz = v1.size();
    // }
    // vector<int> v2(sz);
    // sort(v.begin(), v.end());
    // sort(v1.begin(), v1.end());
    // set_intersection(v.begin(), v.end(), v1.begin(), v1.end(), v2.begin());
    // int mx = *max_element(v2.begin(), v2.end());
    // cout << mx;
    return 0;
}