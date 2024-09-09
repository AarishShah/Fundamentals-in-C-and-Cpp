#include <iostream>
using namespace std;

int main()
{
    int a[5];

    cout << "Enter elements" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\n"
         << sizeof(a);
}