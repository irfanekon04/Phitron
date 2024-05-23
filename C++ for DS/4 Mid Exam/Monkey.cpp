#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    while (cin.getline(s, 100001))
    {
        int n = strlen(s);
        sort(s, s + n);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}