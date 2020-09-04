// We can use multiple apporaches to reverse a string

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << s << endl;
    reverse(s.begin(), s.end()); // STL function
    cout << s << endl;

    int l = s.size();
    for (int i = 0; s[i]; ++i)
    {
        cout << s[l - i - 1]; // Naive method
    }
    cout << endl;
    return 0;
}