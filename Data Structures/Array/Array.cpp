#include <iostream>
using namespace std;

int search(int arr[], int size, int elem)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == elem)
            return i;
    }
    return -1;
}

void update(int arr[], int size, int pos, int val)
{
    if (pos < 0 || pos > size - 1)
    {
        cout << "Invalid position" << endl;
    }
    else
    {
        arr[pos - 1] = val;
        cout << "Data updated successfully" << endl;
    }
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10, el, pos;
    cout << "Initial array is: " << endl;
    display(arr, size);
    cout << "Total elements: " << size << endl;
    // Linear search
    cout << "Enter search term: " << endl;
    cin >> el;
    if (search(arr, size, el) != -1)
    {
        cout << el << " is present at index " << search(arr, size, el) << endl;
    }
    else
    {
        cout << el << " is not present in the array" << endl;
    }

    // Data updation
    cout << "Enter position and new value: " << endl;
    cin >> pos >> el;
    update(arr, size, pos, el);
    cout << "After updation array is: " << endl;
    display(arr, size);

    // Delete element
    cout << "Enter delete term: " << endl;
    cin >> el;
    int found = search(arr, size, el);
    // cout << found << endl;
    if (found != -1)
    {
        for (int i = found; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    cout << "After deletion array is: " << endl;
    display(arr, size);
    cout << "Total elements: " << size << endl;
    return 0;
}