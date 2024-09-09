#include <iostream>
using namespace std;

int add(int a, int b) // formal parameter, this line is called prototype of a fn
{
    return a + b; // the body is called definition of a fn
}

int main()
{
    int x = 10, y = 5, z;

    z = add(x, y); // actual parameter

    cout << z << endl;
}