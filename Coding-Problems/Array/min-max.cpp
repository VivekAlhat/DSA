/* Maximum and minimum of an array using minimum number of comparisons */

#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int min, max;
};

struct Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;
    int i;

    /* if n is odd initialize min and max as first element */
    if ((n & 1) == 1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        i = 1;
    }
    else
    {
        if (arr[0] > arr[1])
        {
            minmax.min = arr[1];
            minmax.max = arr[0];
        }
        else
        {
            minmax.min = arr[0];
            minmax.max = arr[1];
        }
        i = 2;
    }

    for (i; i < n; i += 2)
    {
        if (arr[i] > arr[i + 1])
        {
            if (arr[i] > minmax.max)
            {
                minmax.max = arr[i];
            }

            if (arr[i + 1] < minmax.min)
            {
                minmax.min = arr[i + 1];
            }
        }
        else
        {
            if (arr[i + 1] > minmax.max)
            {
                minmax.max = arr[i + 1];
            }

            if (arr[i] < minmax.min)
            {
                minmax.min = arr[i];
            }
        }
    }
    return minmax;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    struct Pair minmax;
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    minmax = getMinMax(arr, n);
    cout << "Max : " << minmax.max << endl;
    cout << "Min : " << minmax.min << endl;
    return 0;
}