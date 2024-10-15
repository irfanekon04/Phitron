#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    queue<string> q;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string name;
            cin >> name;
            q.push(name);
        }
        else
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    return 0;
}