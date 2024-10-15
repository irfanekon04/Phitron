#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool first = true;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        if (!first)
        {
            cout << " ";
        }
        cout << word;
        first = false;
    }

    return 0;
}