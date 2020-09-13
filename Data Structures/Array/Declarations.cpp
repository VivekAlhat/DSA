#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Array declarations of different types
    int A[5];
    int B[5] = {1, 2, 3, 4, 5};
    int C[5] = {1, 2, 3};
    int D[] = {1, 2, 3, 4, 5};
    int E[5] = {0};

    // Array printing
    cout << A[3] << endl; // Garbage value
    cout << 4 [B] << endl;
    cout << C[4] << endl;     // Garbage value because we haven't initialized that index
    cout << *(D + 3) << endl; // Printing array using pointers
    cout << 1 [E] << endl;    // Array subscripts
    return 0;
}