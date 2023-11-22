#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        (*this).name = name;
        (*this).age = age;
    }
    void hello()
    {
        cout << "hello" << endl;
    }
};
int main()
{
    Person sinan("Sinan Rahaman", 24);
    cout << sinan.name << " " << sinan.age << endl;
    return 0;
}