#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> List;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        List.push_back(val);
    }
    List.sort();
    List.unique();
    for (auto it : List)
    {
        cout << it << " ";
    }
    return 0;
}