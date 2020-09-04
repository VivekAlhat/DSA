#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    for (int i = 0; s[i]; ++i)
    {
        if (!(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 97 && s[i] <= 122) && !(s[i] >= 48 && s[i] <= 57))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if (isValid(s))
    {
        cout << "Valid\n";
    }
    else
    {
        cout << "Invalid\n";
    }
    return 0;
}