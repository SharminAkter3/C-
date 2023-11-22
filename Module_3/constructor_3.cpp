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
    char nam_1[100] = "Rafsan";
    char nam_2[100] = "Rahaman";
    Person rafsan(5.9, 16, nam_1);
    Person rahaman(6.1, 20, nam_2);

    if (rafsan.age > rahaman.age)
    {
        cout << rafsan.name << endl;
    }
    else
    {
        cout << rahaman.name << endl;
    }
    return 0;
}