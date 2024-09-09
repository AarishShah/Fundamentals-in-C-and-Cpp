#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialise(struct Rectangle *p, int l, int b)
{
    p->length = l;
    p->breadth = b;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

void change_length(struct Rectangle *p, int n)
{
    p->length = n;
}

int main()
{
    struct Rectangle r;

    initialise(&r, 10, 5);
    cout << "Area: " << area(r);
    change_length(&r, 20);
    cout << "\nArea: " << area(r);
}