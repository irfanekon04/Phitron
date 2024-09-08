#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> arr[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (x < 0 || x >= n || y < 0 || y >= n)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (x == y)
            {
                cout << "YES" << endl;
            }
            else
            {
                bool flag = false;
                int sz = arr[x].size();
                for (int i = 0; i < sz; i++)
                {
                    if (arr[x][i] == y)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}