#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 1, int b = 1)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    void change_length(int n)
    {
        length = n;
    }
};

int main()
{
    Rectangle r(10, 5);
    cout << "Area: " << r.area();
    r.change_length(20);
    cout << "\nArea: " << r.area();
}