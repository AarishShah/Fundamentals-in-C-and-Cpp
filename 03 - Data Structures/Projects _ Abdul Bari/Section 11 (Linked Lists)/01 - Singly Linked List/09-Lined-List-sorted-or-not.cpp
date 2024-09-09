#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL;

void create(int a[], int n)
{
    struct Node *t, *last;

    first = new Node;
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = NULL;

        last->next = t;
        last = t;
    }
}

int count(struct Node *p)
{
    int l = 0;
    while (p != NULL)
    {
        l++;
        p = p->next;
    }
    return l;
}

// displaying a linked list
void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void sorted(struct Node *p)
{
    int x = INT32_MIN;

    while (p != NULL)
    {
        if (p->data < x)
        {
            cout << "Not sorted";
            return; // return false
        }
        else
        {
            x = p->data;
            p = p->next;
        }
    }
    cout << "Sorted";
    return; // return true
}

int main()
{
    int a[] = {3, 5, 7000, 10, 15};
    create(a, 5);
    display(first);
    cout << endl;
    sorted(first);
}
