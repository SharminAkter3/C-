#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{
    Student s;
    s.roll = 29;
    s.cls = 9;
    s.section = 'A';
    char nm[100] = "Simran";
    strcpy(s.name, nm);

    Student s2;
    s2.roll = 50;
    s2.cls = 10;
    s2.section = 'B';
    char nm2[100] = "Rahaman";
    strcpy(s2.name, nm2);

    cout << s.name << " " << s2.name;
    return 0;
}