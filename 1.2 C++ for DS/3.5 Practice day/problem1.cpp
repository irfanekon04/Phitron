#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    char sec;
    int mathMarks;
    int cls;
    Student(string name, int roll, char sec, int mathMarks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->sec = sec;
        this->mathMarks = mathMarks;
        this->cls = cls;
    }
};

int main()
{
    Student keya("Keya", 5, 'A', 69, 12);
    Student rayhan("Rayhan", 3, 'A', 70, 12);
    Student irfan("Irfan", 69, 'A', 56, 12);

    if (keya.mathMarks > rayhan.mathMarks && keya.mathMarks > irfan.mathMarks)
    {
        cout << keya.name << " got the top marks!" << endl;
    }
    else if (rayhan.mathMarks > keya.mathMarks && rayhan.mathMarks > irfan.mathMarks)
    {
        cout << rayhan.name << " got the top marks!" << endl;
    }
    else
    {
        cout << irfan.name << " got the top marks!" << endl;
    }
    return 0;
}