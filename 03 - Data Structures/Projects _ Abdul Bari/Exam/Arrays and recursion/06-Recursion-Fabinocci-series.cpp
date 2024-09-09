#include <iostream>
using namespace std;

int fib(int);

int main()
{
    int n;

    cout << "Enter term upto which you want to evaluate Fabinocci series: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << fib(i) << " ";
    }
}
int fib(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}