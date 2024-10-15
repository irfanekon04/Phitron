#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> arr[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int q;
    cin >> q;
    vector<int> queries(q);
    for (int i = 0; i < q; i++)
    {
        cin >> queries[i];
    }

    for (int query : queries)
    {
        if (arr[query].empty())
            cout << -1 << endl;
        else
        {
            vector<int> childrens = arr[query];
            sort(childrens.begin(), childrens.end(), greater<int>());
            for (auto child : childrens)
            {
                cout << child << " ";
            }
            cout << endl;
        }
    }
    return 0;
}