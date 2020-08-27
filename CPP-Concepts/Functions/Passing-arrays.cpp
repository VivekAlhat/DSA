#include <iostream>
using namespace std;

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
    display(tmp, 5);
    return 0;
}