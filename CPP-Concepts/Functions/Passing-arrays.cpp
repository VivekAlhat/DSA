#include <iostream>
using namespace std;

void passValue(int a[], int n)
{
    // In this function a is just a pointer to array
    a[0] = 10;
}

int *returnArr(int a[])
{
    return a;
}

void display(int *a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *tmp;
    tmp = returnArr(arr);
    passValue(tmp, 5);
    display(tmp, 5);
    return 0;
}