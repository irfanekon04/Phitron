#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    unordered_map<int, int> freq;
    priority_queue<pair<int, int>> max_heap;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            freq[x]++;
            max_heap.push({freq[x], x});
        }
        else if (type == 2)
        {
            while (!max_heap.empty())
            {
                auto [count, value] = max_heap.top();
                if (freq[value] == count)
                {
                    cout << value << "\n";
                    freq[value] -= max(1, count - 1);
                    if (freq[value] == 0)
                    {
                        freq.erase(value);
                    }
                    break;
                }
                max_heap.pop();
            }
            if (max_heap.empty())
            {
                cout << "empty\n";
            }
        }
    }
    return 0;
}
