#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(10);
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = i + 1;
    }
    cout << v.size() << endl
         << v.capacity() << endl
         << v.max_size() << endl;
    v.resize(20);
    cout << v.size() << endl
         << v.capacity() << endl;
    v.clear();
    cout << v.size() << endl
         << v.capacity() << endl;
    int isEmpty = v.empty();
    cout << isEmpty << endl;
    v.resize(10, 100);
    cout << v.size() << endl
         << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}