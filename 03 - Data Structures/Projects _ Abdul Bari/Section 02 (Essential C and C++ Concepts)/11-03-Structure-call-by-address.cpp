#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void change_length(struct Rectangle *p, int new_length) // to change the values of actual parameter we use pointers
{
    p->length = new_length;
}

int main()
{
    struct Rectangle r
    {
        10, 5
    };

    change_length(&r, 20);

    cout << r.length;
}