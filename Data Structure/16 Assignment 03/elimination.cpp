#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s)
        {
            if (!st.empty() && st.top() == '0' && c == '1')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        cout << (st.empty() ? "YES" : "NO") << endl;
    }
    return 0;
}