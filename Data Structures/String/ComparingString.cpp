#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    for (int i = 0; s[i]; ++i)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int i, j;
    string s, s1, s2;
    cin >> s >> s1 >> s2;

    // Converting strings to lowercase
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    for (i = 0, j = 0; s1[i] && s2[j]; ++i, ++j)
    {
        if (s1[i] != s2[j])
        {
            break;
        }
    }

    if (s1[i] == s2[j])
    {
        cout << s1 << " is equal to " << s2 << endl;
    }
    else
    {
        cout << s1 << " is not equal to " << s2 << endl;
    }

    if (isPalindrome(s))
    {
        cout << s << " is palindrome\n";
    }
    else
    {
        cout << s << " is not palindrome\n";
    }
    return 0;
}