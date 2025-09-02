#include(stdio.h)
using namespace std;

class rectangle
{
public:
    int length, breadth; // attributes
    int area()           // behaviour 1
    {
        return length * breadth;
    }
    int perimeter()     // behaviour 2
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    rectangle rl;      // object created
