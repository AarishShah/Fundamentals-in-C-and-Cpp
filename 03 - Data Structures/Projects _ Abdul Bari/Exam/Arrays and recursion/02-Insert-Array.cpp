// To insert an element in an array

#include <iostream>
using namespace std;

int main()
{
    int a[10000];
    int size, item, index;

    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "Elements entered are: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nEnter the element that is to be inserted: ";
    cin >> item;

    cout << "Enter the index where " << item << " is to be inserted (index starts from '0'): ";
    cin >> index;

    // Moving elements in array
    for (int i = size + 1; i > index; i--)
    {
        a[i] = a[i - 1];
    }

    // inserting element at the empty space(not exactly empty)
    a[index] = item;

    cout << "\nNew elements are: ";
    for (int i = 0; i < size + 1; i++)
    {
        cout << a[i] << " ";
    }
}