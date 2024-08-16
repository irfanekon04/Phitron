#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q1;
    queue<int> q2;
    stack<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
    }
    while (!q1.empty())
    {
        int x = q1.front();
        s.push(x);
        q1.pop();
    }
    while (!s.empty())
    {
        int x = s.top();
        q2.push(x);
        s.pop();
    }
    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }
    return 0;
}