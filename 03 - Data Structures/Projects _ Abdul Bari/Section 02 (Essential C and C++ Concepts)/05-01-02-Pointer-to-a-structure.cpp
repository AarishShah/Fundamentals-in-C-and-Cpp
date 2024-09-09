// same program as previous one but error has been fixed

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
    struct Rectangle *p = &r1;

    r1.length = 15;
    cout << r1.length << endl;

    (*p).length = 20; // we must use brackets as the precedence of '.' is higher than '*'
    cout << (*p).length << endl;

    p->length = 25; // alternate way
    cout << p->length << endl;
}