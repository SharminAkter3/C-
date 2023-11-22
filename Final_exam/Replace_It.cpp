// #include <bits/stdc++.h>
// using namespace std;

// string string_replace(string str, string find_string, string replace_string)
// {
//     string result;
//     int string_length = str.length();
//     int find_string_length = find_string.length();
//     int i = 0;

//     while (i < string_length)
//     {
//         bool found = true;
//         for (int j = 0; j < find_string_length; j++)
//         {
//             if (i + j >= string_length || str[i + j] != find_string[j])
//             {
//                 found = false;
//                 break;
//             }
//         }
//         if (found)
//         {
//             result += replace_string;
//             i += find_string_length;
//         }
//         else
//         {
//             result += str[i];
//             i++;
//         }
//     }
//     return result;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     for (int i = 1; i <= t; i++)
//     {
//         string s, x;
//         cin >> s >> x;

//         string replaced_string = string_replace(s, x, "$");
//         cout << replaced_string << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        string s, x;
        cin >> s >> x;

        string result;
        int string_length = s.length();
        int find_string_length = x.length();
        int j = 0;

        while (j < string_length)
        {
            bool found = true;
            for (int k = 0; k < find_string_length; k++)
            {
                if (j + k >= string_length || s[j + k] != x[k])
                {
                    found = false;
                    break;
                }
            }

            if (found)
            {
                result += "$";
                j += find_string_length;
            }
            else
            {
                result += s[j];
                j++;
            }
        }

        cout << result << endl;
    }

    return 0;
}
