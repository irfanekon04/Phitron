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
    Person *ekon = new Person("Irfan Mahmud", 19);
    Person *keya = new Person("Khadiza Keya", 20);
    // ekon->name = keya->name;
    // ekon->age = keya->age;
    // delete keya;
    *ekon = *keya;
    delete keya;

    cout << ekon->name << " " << ekon->age;
    return 0;
}