#include <iostream>
using namespace std;

int Lucas(int);

int main()
{
    int n;

    cout << "Enter term upto which you want to evaluate Lucas series: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << Lucas(i) << " ";
    }
}
int Lucas(int n)
{
    if (n == 0)
        return 2;
    if (n == 1)
        return 1; // these 2 lines is same as Fabinocci
    else
        return Lucas(n - 1) + Lucas(n - 2); // this line is same as Fabinocci
}