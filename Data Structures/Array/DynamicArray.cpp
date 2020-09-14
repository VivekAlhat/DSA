#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int *arr;
    arr = new int[5];

    // In c, we can allocate memory dynamically using malloc
    // arr = (int *)malloc(5*sizeof(int));

    for (int i = 0; i < 5; ++i)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}