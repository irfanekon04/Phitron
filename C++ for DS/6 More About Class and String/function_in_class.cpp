#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int age;
    person(string nm, int ag)
    {
        name = nm;
        age = ag;
    }
    void hello()
    {
        cout << "Hello " << name << " you are " << age << " years old" << endl;
    }
};
int main()
{
    person ekon("irfan ekon", 69);
    cout << ekon.name << " " << ekon.age << endl;
    ekon.hello();
    return 0;
}