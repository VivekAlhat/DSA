#include <iostream>
#include <algorithm>
using namespace std;

int interpolationSearch(int arr[], int size, int key)
{
    int l = 0, r = size - 1;
    while (l <= r && key >= arr[l] && key <= arr[r])
    {
        int probe = l + ((double)((r - l) / (arr[r] - arr[l])) * key - arr[l]);
        if (arr[probe] == key)
        {
            return probe;
        }

        if (arr[probe] > key)
        {
            r = probe - 1;
        }
        else
        {
            l = probe + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 7, 6, 10, 5, 4, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size);
    int key;
    cin >> key;
    int res = interpolationSearch(arr, size, key);
    if (res != -1)
    {
        cout << key << " found at position " << res << endl;
    }
    else
    {
        cout << key << " not found" << endl;
    }
    return 0;
}