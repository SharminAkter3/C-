#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream sm(s);
    string word;
    int count = 0;

    while (sm >> word)
    {
        if (word == "Ratul")
        {
            count++;
        }
    }
    if (count != 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}