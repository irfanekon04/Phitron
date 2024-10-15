#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    bool same = true;
    while (!st.empty() && !q.empty())
    {
        if (st.top() != q.front())
        {
            same = false;
            break;
        }
        st.pop();
        q.pop();
    }
    if (!st.empty() || !q.empty())
    {
        same = false;
    }
    cout << (same ? "YES" : "NO") << endl;
    return 0;
}