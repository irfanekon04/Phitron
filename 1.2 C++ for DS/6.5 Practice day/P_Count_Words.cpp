#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    bool fnd = false;
    int cnt = 0;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (fnd == false)
                cnt++;
            fnd = true;
        }
        else
        {
            fnd = false;
        }
    }
    cout << cnt;

    return 0;
}

//      stringstream using     //
// stringstream ss(s);
// string word;
// int cnt = 0;
// while (ss >> word)
// {
//     for (int i = 0; i < word.size(); i++)
//     {
//         if (word[i] >= 'a' && word[i] <= 'z')
//         {
//             cnt++;
//             break;
//         }
//         else if (word[i] >= 'A' && word[i] <= 'Z')
//         {
//             cnt++;
//             break;
//         }
//     }
// }
// cout << cnt << endl;