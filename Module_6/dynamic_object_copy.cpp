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
};
int main()
{
    Person *sinan = new Person("Sinan Rahaman", 24);
    Person *simran = new Person("Simran Rahaman", 20);
    // cout << sinan.name << " " << sinan.age << endl;

    return 0;
}