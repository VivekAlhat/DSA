#include <iostream>
using namespace std;

// Function to pass by reference
/* 
    Here n is an alias of num1, it is num1 and m is an alias of num2. 
    Both are references of absolute parameter hence n/num1 and m/num2 are same
*/
void swap(int &n, int &m)
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