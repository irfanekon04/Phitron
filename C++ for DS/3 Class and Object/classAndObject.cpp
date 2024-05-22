#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    int id;
    char name[100];
    int age;
};

int main()
{
    Employee keya;
    cin.getline(keya.name, 100);
    cin >> keya.id >> keya.age;

    cout << "Name: " << keya.name << endl
         << "ID: " << keya.id << endl
         << "Age: " << keya.age << endl;
    return 0;
}