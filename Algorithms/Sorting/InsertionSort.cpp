#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int arr[], int size)
{
    int index, val;
    for (int i = 1; i < size; ++i)
    {
        index = i - 1;
        val = arr[i];
        while (index >= 0 && arr[index] > val)
        {
            // arr[index + 1] = arr[index];
            swap(arr[index + 1], arr[index]);
            index = index - 1;
        }
        arr[index + 1] = val;
    }
}

int main()
{
    int arr[] = {10, 6, 9, 7, 8, 5, 1, 2, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "After Insertion Sort\n";
    insertionSort(arr, size);
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}