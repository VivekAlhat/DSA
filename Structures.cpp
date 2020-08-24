#include <bits/stdc++.h>
using namespace std;

struct Book
{
    int bookId;
    string bookName;
    double price;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    struct Book b[5];
    for (int i = 0; i < 5; ++i)
    {
        b[i].bookId = i + 1;
        cin >> b[i].bookName >> b[i].price;
    }

    // Displaying data

    for (int i = 0; i < 5; ++i)
    {
        cout << "----------------------------" << endl;
        cout << "Book: " << b[i].bookId << endl;
        cout << "Name: " << b[i].bookName << endl;
        cout << "Price: " << b[i].price << endl;
    }
    return 0;
}