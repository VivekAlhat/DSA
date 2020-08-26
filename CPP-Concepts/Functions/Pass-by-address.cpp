#include <iostream>
using namespace std;

// Function to pass by address
/* It swaps data by modifying the value present at address pointed by the pointer,
n points to address of num1 and m points to address of num2,
in function, we are replacing value at address pointed by pointer so swapping works successfully
*/
void swap(int *n, int *m)
{
    int temp = *n;
    *n = *m;
    *m = temp;
}

int main()
{
    int num1 = 10, num2 = 20;
    cout << "Before Swap:" << endl;
    cout << "Num1: " << num1 << ", Num2: " << num2 << endl;
    swap(&num1, &num2);
    cout << "After Swap:" << endl;
    cout << "Num1: " << num1 << ", Num2: " << num2 << endl;
    return 0;
}