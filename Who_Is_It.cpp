#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    char sec;
    int marks;
    Student(int id, string name, char sec, int marks)
    {
        this->id = id;
        this->name = name;
        this->sec = sec;
        this->marks = marks;
    }
};
int main()
{
    for (int i = 0; i < 3; i++)
    {
        int id, marks;
        char sec;
        string name;
        cin >> id >> name >> sec >> marks;
        Student stdnt(id, name, sec, marks);
    }
    // cin >> stdnt1.id;
    // getchar();
    // cin.getline(stdnt1.name, 101);
    // cin >> stdnt1.sec >> stdnt1.marks;
    // Student stdnt2;
    // cin >> stdnt2.id;
    // getchar();
    // cin.getline(stdnt2.name, 101);
    // cin >> stdnt2.sec >> stdnt2.marks;
    // Student stdnt3;
    // cin >> stdnt3.id;
    // getchar();
    // cin.getline(stdnt3.name, 101);
    // cin >> stdnt3.sec >> stdnt3.marks;
    // int mn;
    // int mx = max({stdnt1.marks, stdnt2.marks, stdnt3.marks});
    // if (mx == stdnt1.marks)
    // {
    //     cout << stdnt1.id << " " << stdnt1.name << " " << stdnt1.sec << " " << stdnt1.marks << endl;
    // }
    // else if (mx == stdnt2.marks)
    // {
    //     cout << stdnt2.id << " " << stdnt2.name << " " << stdnt2.sec << " " << stdnt2.marks << endl;
    // }
    // else if (mx == stdnt3.marks)
    // {
    //     cout << stdnt3.id << " " << stdnt3.name << " " << stdnt3.sec << " " << stdnt3.marks << endl;
    // }
    cout << stdnt2.id << " " << stdnt2.name << " " << stdnt2.sec << " " << stdnt2.marks << endl;
    return 0;
}