#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    int small, temp;
    for (int i = 0; i < size - 1; ++i)
    {
        small = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j] < arr[small])
            {
                small = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[small];
        arr[small] = temp;
    }
}

int main()
{
    int arr[] = {10, 7, 6, 8, 9, 5, 1, 4, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    cout << "After Selection Sort" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}