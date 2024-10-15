#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a = new int;
    *a = 10;
    return a;
}
int main()
{
    int *x = fun();
    cout << "Value of Address " << x << " is " << *x << endl;
    return 0;
}