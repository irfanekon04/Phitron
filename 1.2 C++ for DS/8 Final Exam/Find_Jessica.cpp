#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int fnd = 0;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            fnd = 1;
            break;
        }
    }
    if (fnd == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}