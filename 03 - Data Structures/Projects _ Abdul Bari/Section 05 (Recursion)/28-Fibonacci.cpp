#include <iostream>
using namespace std;

int Fib(int x)
{
    if (x == 1 || x == 2)
        return 1;
    // else if (x == 2)
    //     return 1;
    else
        return (Fib(x - 1) + Fib(x - 2));
}
int main()
{
    int n;
    cout << "Enter Number ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << Fib(i);
    }
    return 0;
}
