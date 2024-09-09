#include <iostream>
using namespace std;

void show(int J[], int size)
// void show(int *J, int size) // general method

{
    for (int i = 0; i < 5; i++)
        cout << J[i] << " ";
}

int main()
{
    int A[5] = {2, 4, 6, 8, 10};

    show(A, 5);
}