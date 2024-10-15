#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int firstM = -1, secondM = -1;
        int firstI = -1, secondI = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > firstM)
            {
                secondM = firstM;
                secondI = firstI;
                firstM = a[i];
                firstI = i;
            }
            else if (a[i] > secondM)
            {
                secondM = a[i];
                secondI = i;
            }
        }
        if (firstI > secondI)
            swap(firstI, secondI);
        cout << firstI << " " << secondI << endl; 
    }
    return 0;
}