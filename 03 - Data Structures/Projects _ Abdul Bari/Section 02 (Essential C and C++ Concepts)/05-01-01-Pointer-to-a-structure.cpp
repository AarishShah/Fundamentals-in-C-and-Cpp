#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r1
    {
        10, 5
    };
    struct Rectangle *p;

    r1.length = 15;
    cout << r1.length << endl;

    (*p).length = 20; // we must use brackets as the precedence of '.' is higher than '*'
    cout << r1.length << endl;

    p->length = 25; // alternate way
    cout << r1.length << endl;
}

// I am getting segmetation fault