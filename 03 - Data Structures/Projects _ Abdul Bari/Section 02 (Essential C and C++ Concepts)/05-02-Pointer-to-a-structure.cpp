#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle *p;

    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    // p = new Rectangle; // for C++
    p->length = 10;
    p->breadth = 5;
    
    cout << p->length << endl;
    cout << p->breadth << endl;
}