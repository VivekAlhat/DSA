#include <iostream>
using namespace std;

// Function to pass by value
/* Swapping won't work because in pass by value method,
we cannot modify absolute parameter's original data
*/

void swap(int n, int m)
{
    int temp = n;
    n = m;
    m = temp;
}

int main()
{
    int num1 = 10, num2 = 20;
    cout << "Before Swap:" << endl;
    cout << "Num1: " << num1 << ", Num2: " << num2 << endl;
    swap(num1, num2);
    cout << "After Swap:" << endl;
    cout << "Num1: " << num1 << ", Num2: " << num2 << endl;
    return 0;
}