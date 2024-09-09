#include <iostream>
using namespace std;

int fact(int);

int main()
{
    int n;

    cout << "Enter the no: ";
    cin >> n;

    cout << "The factorial of " << n << " is: " << fact(n);
}

int fact(int a)
{
    if (a <= 1)
        return 1; // return a;

    else
        return (a * fact(a - 1));
}