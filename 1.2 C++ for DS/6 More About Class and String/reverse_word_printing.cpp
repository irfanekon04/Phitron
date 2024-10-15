#include <bits/stdc++.h>
using namespace std;
void print(stringstream &str)
{
    string word;
    if (str >> word)
    {
        print(str);
        cout << word << endl;
    }
}
int main()
{
    string s;
    getline(cin, s);
    stringstream str(s);
    // string word;
    // while (str >> word)
    // {
    //     cout << word << endl;
    // }
    print(str);
    return 0;
}