#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c >= '0' && c <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        if (c >= 'A' && c <= 'Z')
        {
            cout << "IS CAPITAL" << endl;
        }
        else
        {
            cout << "IS SMALL" << endl;
        }
    }
    return 0;
}