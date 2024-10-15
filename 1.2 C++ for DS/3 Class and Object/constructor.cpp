#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    int age;
    Student(int roll, int cls, int age)
    {
        this->roll = roll; // constructor using this pointer with arrow sign
        this->cls = cls;
        this->age = age;
    }
};

int main()
{
    Student keya(69, 12, 21);

    cout << "Roll: " << keya.roll << endl
         << "Class: " << keya.cls << endl
         << "Age: " << keya.age << endl;
    return 0;
}