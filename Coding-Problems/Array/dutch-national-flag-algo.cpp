/* Implement dutch national flag algorithm */

#include <bits/stdc++.h>
using namespace std;

void dnflag(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[low], arr[mid]);
            low++;
            mid++;
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(arr[mid], arr[high]);
            high--;
            break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    dnflag(arr, n);
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}