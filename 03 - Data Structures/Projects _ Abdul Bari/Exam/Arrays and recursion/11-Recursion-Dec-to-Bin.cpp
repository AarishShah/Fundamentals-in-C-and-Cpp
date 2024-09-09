#include <iostream>
using namespace std;

int decimal_binary(int n)
{
    if (n == 0)
        return 0;
    else
        return ((n % 2) + 10 * decimal_binary(n / 2));
}

int main()
{
    int no;
    cout << "Enter a decimal number\n";
    scanf("%d", &no);
    cout << "Decimal(" << no << ") = Binary(" << decimal_binary(no) << ")\n";
}