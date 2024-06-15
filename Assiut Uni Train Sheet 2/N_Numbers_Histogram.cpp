#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin >> s;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 1; j <= v[i]; j++)
        {
            cout << s;
        }
        cout << endl;
    }

    return 0;
}