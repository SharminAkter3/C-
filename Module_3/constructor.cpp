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

int main()
{
    Student simran(44, 'A', 7, "Simran");
    Student rahaman(31, 'B', 8, "Rahaman");

    cout << simran.name << endl;
    cout << rahaman.name << endl;
    cout << simran.section << endl;
    cout << simran.cls << endl;
    return 0;
}