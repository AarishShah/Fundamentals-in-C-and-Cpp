#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // struct Rectangle r; // declaration
    struct Rectangle r
    {
        10, 5
    }; // declaration and initaialization

    r.length = 30;
    r.breadth = 15;

    cout << "Area of rectangle is: " << r.length * r.breadth;
}