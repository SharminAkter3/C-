#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r, int s, int c, char *n)
    {
        roll = r;
        section = s;
        cls = c;
        strcpy(name, n);
    }
};

Student fun()
{
    char name[100] = "Simran";
    Student simran(29, 'C', 7, name);
    return simran;
}

int main()
{
    Student simran = fun();
    cout << simran.name;
    return 0;
}