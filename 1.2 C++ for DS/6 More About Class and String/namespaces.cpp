#include <bits/stdc++.h>
using namespace std;
namespace Ekon
{
    int age = 19;
    void hello()
    {
        cout << "Hello Ekon" << endl;
    }
}
namespace Keya
{
    int age2 = 20;
    void hello2()
    {
        cout << "Hello Keya" << endl;
    }
}
using namespace Ekon;
using namespace Keya;
int main()
{
    hello();
    cout << age << endl;
    hello2();
    cout << age2 << endl;

    return 0;
}