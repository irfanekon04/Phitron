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
    Student *Keya = new Student(69, 12, 21); // Dyanamic object keya from student class
    cout << Keya->cls << " " << Keya->roll << " " << Keya->age << endl;
    return 0;
}