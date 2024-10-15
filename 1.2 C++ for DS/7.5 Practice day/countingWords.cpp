#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string x;
    cin >> x;
    stringstream ss(s);
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        if (word == x)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}