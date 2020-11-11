#include <iostream>
using namespace std;

void insert(int arr[], int pos, int elem, int length)
{
    if (pos < 0 || pos > length)
    {
        cout << "Data cannot be inserted here." << endl;
    }
    else
    {
        int i;
        for (i = length; i > pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[i] = elem;
    }
}

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
    int arr[10] = {1, 2, 3, 4, 5, 6};
    int length = 6;
    int size = 10, el, pos;
    cout << "Initial array is: " << endl;
    display(arr, size);
    cout << "Size: " << size << endl;
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

    // Insert at a particular index
    cout << "Enter position and value: " << endl;
    cin >> pos >> el;
    insert(arr, pos, el, length);
    cout << "After insertion array is: " << endl;
    display(arr, size);
    return 0;
}