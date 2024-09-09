#include <iostream>
using namespace std;

int *fun(int n)
{
    int *p;
    // p = (int *)malloc(n * sizeof(int));
    p = new int[n];
    return p;
}

int main()
{
    int *A;
    A = fun(5); // since the fn "fun" is returning a pointer therefore it must be stored in a pointer.
}