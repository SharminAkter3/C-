#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    string sec;
    int id;
};
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
    }
    for (int i = 0; i < n / 2; i++)
    {
        swap(obj[i].id, obj[n - 1 - i].id);
    }
    for (int i = 0; i < n; i++)
    {
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].sec << " " << obj[i].id << endl;
    }
    return 0;
}