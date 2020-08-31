#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Different ways of defining a string

    char a[5] = {'a', 'b', 'c', '\0'};
    char s[] = {'p', 'q', 'r', '\0'};
    char tmp[] = {65, 66, 67};

    string name = "Hello";

    int l = 0;
    for (l; a[l] != '\0'; ++l)
    {
    }
    cout << "Length of " << a << ": " << l << endl;
    cout << "Length of " << name << " : " << name.size() << endl;
    return 0;
}