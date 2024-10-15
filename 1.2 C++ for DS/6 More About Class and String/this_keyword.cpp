#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person Ekon("Irfan Mahmud Ekon", 19);
    cout << Ekon.name << " " << Ekon.age << endl;
    return 0;
}