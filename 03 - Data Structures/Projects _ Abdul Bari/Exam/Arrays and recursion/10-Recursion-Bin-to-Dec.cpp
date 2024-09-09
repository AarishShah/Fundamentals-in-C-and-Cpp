#include <iostream>
using namespace std;

int BinaryToDecimal(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10 + 2 * BinaryToDecimal(n / 10));
}

int main()
{
    int n;
    cout << "Enter the Binary Value:";
    cin >> n;
    cout << "Decimal Value of Binary number is: " << BinaryToDecimal(n);
}