#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int curIndx = v.size() - 1;
        while (curIndx != 0)
        {
            int parentIndx = (curIndx - 1) / 2;
            if (v[parentIndx] > v[curIndx])
            {
                swap(v[parentIndx], v[curIndx]);
            }
            else
            {
                break;
            }
            curIndx = parentIndx;
        }
    }
    for (int val : v)
        cout << val << " ";
    return 0;
}