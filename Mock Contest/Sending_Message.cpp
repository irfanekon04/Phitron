#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string w1, w2;
    while (cin >> w1 >> w2)
    {
        int n1 = w1.size();
        int n2 = w2.size();
        int i = 0, j = 0;
        while (i < n1 && j < n2)
        {
            if (w1[i] == w2[j])
            {
                j++;
            }
            i++;
        }
        if (j == n2)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }
    return 0;
}