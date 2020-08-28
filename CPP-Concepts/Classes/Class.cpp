#include <iostream>
using namespace std;

class Rectangle
{
private:
    int l, b;

public:
    Rectangle(int, int);
    void printArea();
};

Rectangle::Rectangle(int L, int B)
{
    this->l = L;
    this->b = B;
}

void Rectangle::printArea()
{
    cout << "Area: " << (this->l * this->b) << "\n";
}

int main()
{
    Rectangle r(10, 20);
    r.printArea();
    return 0;
}