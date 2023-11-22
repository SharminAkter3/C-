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
    char name[100] = "Rahaman";
    // Student rahaman(5, 'A', 44, name);
    Student *rahaman = new Student(5, 'A', 9, name);
    (*rahaman).roll = 44;

    // cout << (*rahaman).name << endl;
    // cout << (*rahaman).roll << endl;

    // shortcut
    //  (*rahaman). = rahaman->

    cout << rahaman->name << endl;
    cout << rahaman->cls << endl;
    cout << rahaman->roll << endl;

    // delete an object
    delete rahaman;

    cout << rahaman->name << endl;
    cout << rahaman->cls << endl;
    cout << rahaman->roll << endl;

    return 0;
}