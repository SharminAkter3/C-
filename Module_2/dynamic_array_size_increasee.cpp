#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *array = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> array[i];
    }
    int *arr = new int[5];
    for (int i = 0; i < 3; i++)
    {
        arr[i] = array[i];
    }
    arr[3] = 60;
    arr[4] = 50;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // delete a array
    delete[] array;
    for (int i = 0; i < 3; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}