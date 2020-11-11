/* Find k-th smallest and largest element from a given array */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    cout << "Max: " << arr[n - 1 - (k - 1)] << endl;
    cout << "Min: " << arr[k - 1] << endl;
    return 0;
}