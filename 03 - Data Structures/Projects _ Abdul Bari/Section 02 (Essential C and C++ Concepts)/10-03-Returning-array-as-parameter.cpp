#include <iostream>
using namespace std;

void fun(int A[])
{
    cout << sizeof(A) / sizeof(int) << endl; // this won't give the size of array since value of 'A' is 4 bytes as it's a pointer. 4/4 =1.
}

int main()
{
    int A[] = {2, 4, 6, 8, 10};
    int n = 5;
    fun(A);
    cout << sizeof(A) / sizeof(int) << endl; // to get the length of array

    for (int x : A)
    {
        cout << x << " ";
    }
}