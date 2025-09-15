#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, breadth; // attributes

    int area()
    { // behaviour 1
        return length * breadth;
    }

    int perimeter()
    { // behaviour 2
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1; // object created
    r1.length = 4;
    r1.breadth = 5;

    cout << "Area: " << r1.area() << endl;
    cout << "Perimeter: " << r1.perimeter() << endl;

    return 0;
}
