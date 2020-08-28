#include <iostream>
using namespace std;

template <class T>
class Rectangle
{
private:
    T l, b;

public:
    Rectangle(T length, T breadth)
    {
        l = length;
        b = breadth;
    }

    T printArea()
    {
        return (l * b);
    }
};

int main()
{
    Rectangle<int> r(10, 20);
    Rectangle<float> r1(12.5, 20.89);
    cout << "Int Area: " << r.printArea() << "\n";
    cout << "Float Area: " << r1.printArea() << "\n";
    return 0;
}