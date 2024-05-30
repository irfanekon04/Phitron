#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int n;
        char c;
        cin >> n >> c;
        int i = 1;
        bool first = true;
        while (i <= n)
        {
            if (first != 1)
            {
                cout << " ";
            }
            cout << c;
            first = false;
            i++;
        }
        cout << endl;
    }

    return 0;
}