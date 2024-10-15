#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    switch (s)
    {
    case '+':
        if (a + b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            int ans = a + b;
            cout << ans << endl;
        }
        break;
    case '-':
        if (a - b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            int ans = a - b;
            cout << ans << endl;
        }
        break;
    case '*':
        if (a * b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            int ans = a * b;
            cout << ans << endl;
        }
        break;
    default:
        printf("Invalid sign\n");
        break;
    }
    return 0;
}