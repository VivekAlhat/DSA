/* Sort negative numbers */

#include <bits/stdc++.h>
using namespace std;

void naiveApproach(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

void optimalApproach(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        if (arr[low] < 0 && arr[high] < 0)
        {
            low++;
        }
        else if (arr[low] > 0 && arr[high] < 0)
        {
            swap(arr[low++], arr[high--]);
        }
        else if (arr[low] > 0 && arr[high] > 0)
        {
            high--;
        }
        else
        {
            low += 1;
            high -= 1;
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

    // naiveApproach(arr, n);
    optimalApproach(arr, n);
    // Printing array
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}