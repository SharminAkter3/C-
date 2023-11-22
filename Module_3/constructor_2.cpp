#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    char name[100];
    float height;
    int age;

    Person(float h, int a, char *n)
    {
        height = h;
        age = a;
        strcpy(name, n);
    }
};

int main()
{
    char nam[100] = "Rafsan";
    Person rafsan(5.9, 16, nam);
    cout << rafsan.name << endl;
    return 0;
}