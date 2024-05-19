#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n % 2) // switch case condition
    {
    case 0:
        cout << "even" << endl;
        break;
    case 1:
        cout << "odd" << endl;
    default:
        break;
    }
    return 0;
}