#include <iostream>
#include <string>
using namespace std;
int main()
{

    int n;
    cin >> n;
    // array
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }

    char str[n];
    // string without spaces
    cin >> str;
    cout << str << endl;

    // sring with spaces
    getchar();
    cin.getline(str, n);
    cout << str << endl;

    return 0;
}