#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    cin >> a;
    cout << fixed << setprecision(2) << a << endl; // precise value up to 2 digit
    return 0;
}