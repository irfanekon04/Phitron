#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id;
    }
    Student temp;
    temp.s = 'A';
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        temp.s = a[left].s;
        a[left].s = a[right].s;
        a[right].s = temp.s;

        left++;
        right--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << endl;
    }
    return 0;
}