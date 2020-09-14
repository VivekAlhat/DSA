#include <bits/stdc++.h>
using namespace std;

int *resize(int *arr, int size)
{
    int *n;
    n = new int[10];
    for (int i = 0; i < size; ++i)
    {
        n[i] = arr[i];
    }
    delete[] arr; //delete existing array to avoid memory leaks
    arr = n;      //point to newly created array
    n = nullptr;  //point to null because we only want one pointer on array
    return arr;
}

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

    arr = resize(arr, 5);
    for (int i = 0; i < 10; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}