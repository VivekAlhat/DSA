/* Given an array (or string), the task is to reverse the array/string. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    // Loop only till middle element to avoic extra swapping which results in original array
    for (int i = 0; i < size / 2; ++i)
    {
        int tmp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = tmp;
    }

    cout << "Array after reversal\n";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}