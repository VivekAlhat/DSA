#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Stack memory */
    int num = 10; // Init data variable;
    int *p;       // Declared pointer variable;

    p = &num; // Init pointer variable to store address of num;

    cout << "Memory address of num is: " << p << endl;
    cout << "Value stored at " << p << " is " << *p << endl; // Dereferencing the pointer to return data;
    cout << "Next memory address is " << p + 1 << endl;
    cout << "\n";

    /* Heap memory */
    int *arr = new int[3];
    int *ptr;
    ptr = arr;
    cout << "Heap address of array is " << ptr << endl;
    return 0;
}