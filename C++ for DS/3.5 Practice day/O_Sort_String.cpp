#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // sort(s, s + n);
    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char s;
        cin >> s;
        count[(int)s - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        while (count[i] != 0)
        {
            cout << (char)(i + 'a');
            count[i]--;
        }
    }
    return 0;
}