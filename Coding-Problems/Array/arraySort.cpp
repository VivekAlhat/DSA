/* Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, i, cnt0 = 0, cnt1 = 0, cnt2 = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; ++i)
    {
        switch (arr[i])
        {
        case 0:
            cnt0++;
            break;

        case 1:
            cnt1++;
            break;

        case 2:
            cnt2++;
            break;
        }
    }

    i = 0;

    while (cnt0 > 0)
    {
        arr[i++] = 0;
        cnt0--;
    }

    while (cnt1 > 0)
    {
        arr[i++] = 1;
        cnt1--;
    }

    while (cnt2 > 0)
    {
        arr[i++] = 2;
        cnt2--;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}