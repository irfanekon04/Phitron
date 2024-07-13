#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q1, q2, mergedQ;
    int n, m, tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        q1.push(tmp);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> tmp;
        q2.push(tmp);
    }
    while (!q1.empty())
    {
        mergedQ.push(q1.front());
        q1.pop();
    }
    while (!q2.empty())
    {
        mergedQ.push(q2.front());
        q2.pop();
    }
    while (!mergedQ.empty())
    {
        cout << mergedQ.front() << " ";
        mergedQ.pop();
    }
    cout << endl;
    return 0;
}