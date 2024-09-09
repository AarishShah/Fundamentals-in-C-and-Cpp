// To delete an element from an array

#include <iostream>
using namespace std;

int main()
{
    int a[10000], b[10000];
    int size, item, j = 0;

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

    cout << "\nEnter the element that is to be deleted: ";
    cin >> item;

    // To delete the items
    for (int i = 0; i < size; i++)
    {
        if (a[i] != item)
        {
            b[j] = a[i];
            j++;
        }
    }

    cout << "Elements of array after removing " << item << " are: ";
    for (int i = 0; i < size; i++)
    {
        cout << b[i] << " ";
    }
}