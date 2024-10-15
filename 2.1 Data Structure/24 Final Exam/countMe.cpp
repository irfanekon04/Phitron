#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string sentence;
        getline(cin, sentence);
        stringstream ss(sentence);
        string word;
        map<string, int> mp;
        string maxWord;
        int maxCount = 0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > maxCount)
            {
                maxWord = word;
                maxCount = mp[word];
            }
        }
        cout << maxWord << " " << maxCount << endl;
    }
    return 0;
}