#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> queries;
    int q;
    cin >> q;
    while (q--)
    {
        int operation, val;
        cin >> operation >> val;
        if (operation == 0)
        {
            queries.push_front(val);
        }
        else if (operation == 1)
        {
            queries.push_back(val);
        }
        else if (operation == 2)
        {
            if (val < queries.size())
            {
                auto it = next(queries.begin(), val);
                queries.erase(it);
            }
        }
        if (queries.empty())
        {
            cout << "L -> " << endl;
            cout << "R -> " << endl;
        }
        else
        {
            cout << "L -> ";
            for (auto it : queries)
            {
                cout << it << " ";
            }
            cout << endl;
            cout << "R -> ";
            for (auto it = queries.end(); it != queries.begin();)
            {
                it--;
                cout << *it << " ";
            }
            cout << endl;
        }
    }

    return 0;
}