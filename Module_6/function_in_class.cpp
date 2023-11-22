#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string nm, int ag)
    {
        name = nm;
        age = ag;
    }
    void hello()
    {
        cout << name << " " << age << endl;
    }
};
int main()
{
    Person simran("Simran Rahaman", 24);
    simran.hello();
    // cout << simran.name << " " << simran.age << endl;
    return 0;
}