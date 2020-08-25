#include <bits/stdc++.h>
using namespace std;

struct Book
{
    int id;
    string name;
};

int main()
{
    struct Book b = {1, "Zero To One"}; // Init a structure variable
    struct Book *ptr = &b;              // Init pointer to structure
    ptr->id = 2;
    ptr->name = "How to stop worrying and start living";
    cout << ptr->name << endl; // Referencing structure variables using pointer
    return 0;
}