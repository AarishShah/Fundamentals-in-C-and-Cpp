// arrays can only be passed as addresses but if we put an array in a structure then we can also pass the array by value

#include <iostream>
using namespace std;

struct Test
{
    int a[5];
    int n;
};

void fun(struct Test t1)
{
    t1.a[0] = 10;
    t1.a[1] = 9;
    t1.a[2] = 8;
    t1.a[3] = 7;
    t1.a[4] = 6;

    for (int i = 0; i < 5; i++)
    {
        cout << t1.a[i] << " ";
    }
}

int main()
{
    struct Test t = {{2, 4, 6, 8, 10}, 5};

    fun(t);

    for (int i = 0; i < 5; i++)
    {
        cout << "\n"
             << t.a[i] << " "; // since it's pass by value, actual parameters won't be altered
    }
}