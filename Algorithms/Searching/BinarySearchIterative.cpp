#include <bits/stdc++.h>
using namespace std;

int binSearch(int arr[], int l, int r, int key)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }

        if (arr[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int key, l = 0, r = n - 1;
    cin >> key;
    cout << key << " found at position: " << binSearch(arr, l, r, key) << endl;
    return 0;
}