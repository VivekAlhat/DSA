#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 10;
    int &ref = num; // Init reference variable, num can also be referred as ref

    // Before increment
    cout << num << " " << ref << endl;
    ref++;

    // After increment
    cout << num << " " << ref << endl;
    return 0;
}