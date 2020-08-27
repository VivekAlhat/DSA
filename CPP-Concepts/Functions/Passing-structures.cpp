#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
} r;

void print(struct Rectangle p)
{
    cout << p.length << endl;
    cout << p.breadth << endl;
}

void modify(struct Rectangle *s)
{
    s->breadth = 50;
}

int main()
{
    r = {10, 20};
    modify(&r);
    print(r);
    return 0;
}