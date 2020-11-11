/* Given an array (or string), the task is to reverse the array/string. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    // Loop only till middle element to avoic extra swapping which results in original array
    for (int i = 0; i < str.length() / 2; ++i)
    {
        char tmp = str[i];
        str[i] = str[str.length() - i - 1];
        str[str.length() - i - 1] = tmp;
    }

    cout << "String after reversal\n";
    cout << str << endl;

    return 0;
}