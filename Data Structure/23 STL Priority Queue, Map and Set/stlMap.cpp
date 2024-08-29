#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp.insert({"Irfan", 10});
    mp.insert({"Khadiza", 20});
    mp.insert({"Keya", 30});
    mp.insert({"Ekon", 40});

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // O(logN)
    }

    if (mp.count("Rayhan"))
    {
        cout << "ase" << endl;
    }
    else
    {
        cout << "nai" << endl;
    }
    return 0;
}