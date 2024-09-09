#include <iostream>
using namespace std;

void TOH(int n, char a, char b, char c)
{
    if (n > 0)
    {
        TOH(n - 1, a, c, b); // A to B via C
        cout << a << " to " << c << " via " << b << endl;
        TOH(n - 1, b, a, c); // B to C via A
    }
}

int main()
{
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    TOH(n, 'A', 'B', 'C');
}
