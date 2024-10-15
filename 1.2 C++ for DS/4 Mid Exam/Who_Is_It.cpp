#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    char name[101];
    char sec;
    int marks;
    Student(int id, char name[101], char sec, int marks)
    {
        this->id = id;
        // this->name = name;
        strcpy(this->name, name);
        this->sec = sec;
        this->marks = marks;
    }
};
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int id, marks;
        char sec;
        char name[101];
        cin >> id >> name >> sec >> marks;
        Student a(id, name, sec, marks);
        cin >> id >> name >> sec >> marks;
        Student b(id, name, sec, marks);
        cin >> id >> name >> sec >> marks;
        Student c(id, name, sec, marks);
        Student topper(INT_MAX, "", ' ', INT_MIN);
        // int mn = min({a.id, b.id, c.id});
        int mx = max({a.marks, b.marks, c.marks});
        if (mx == a.marks)
        {
            topper = a;
        }
        else if (mx == b.marks && b.id < topper.id)
        {
            topper = b;
        }
        else if (mx == c.marks && c.id < topper.id)
        {
            topper = c;
        }
        // else
        // {
        //     cout << "didnt work" << endl;
        // }
        cout << topper.id << " " << topper.name << " " << topper.sec << " " << topper.marks << endl;
    }

    return 0;
}