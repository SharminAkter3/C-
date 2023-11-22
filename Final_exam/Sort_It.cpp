#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    string sec;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};

bool compareNumber(Student a, Student b)
{
    if (a.total_marks == b.total_marks)
    {
        return a.id < b.id;
    }
    else
    {
        return a.total_marks > b.total_marks;
    }
}
int main()
{
    int n;
    cin >> n;
    Student obj[n];
    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].name;
        cin >> obj[i].cls;
        cin >> obj[i].sec;
        cin >> obj[i].id;
        cin >> obj[i].math_marks;
        cin >> obj[i].eng_marks;
        obj[i].total_marks = obj[i].math_marks + obj[i].eng_marks;
    }
    sort(obj, obj + n, compareNumber);
    for (int i = 0; i < n; i++)
    {
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].sec << " " << obj[i].id << " " << obj[i].math_marks << " " << obj[i].eng_marks << endl;
    }
    return 0;
}
