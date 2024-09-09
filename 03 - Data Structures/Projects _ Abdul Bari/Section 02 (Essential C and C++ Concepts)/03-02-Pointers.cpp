#include <iostream>
#include <stdlib.h> // for line no 8
using namespace std;

int main()
{
    int *p = new int[5];                     // to create an array in heap in cpp
    int *q = (int *)malloc(5 * sizeof(int)); // to create an array in heap in c

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }

    delete[] p; // this will delete array p;
    free(q);    // this will delete q. This is the syntax of C language.
}

// int *q = (int *) // type casting from void to int
// malloc // allocate memory
// (5 *  // allocates 5 multiplied by
// sizeof(int)); // size of integer (which is 4 in latest compilers)