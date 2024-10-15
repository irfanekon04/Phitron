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
            if ((c == '0' && !st.empty() && st.top() == '1') || (c == '1' && !st.empty() && st.top() == '0'))
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