#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "HelloWORld!";
    for (int i = 0; s[i]; ++i)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32; // to lower case
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] -= 32; // to upper case
        }
    }
    cout << s << endl;
    return 0;
}