// will create a md for this. Note's from home rough.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL; // a global pointer ('first' of type Node) will be NULL until assigned some value

void create(int a[], int n)
{
    struct Node *t, *last; // t is temporary node

    first = new Node; // will point to a new node created in heap. We can alter this node as well but we intend to preserve it.
    first->data = a[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node; // a pointer in heap is created by name 't' of type Node (that means that 't' will have 'data' and a pointer 'next')
        t->data = a[i];
        t->next = NULL; // Home rough

        last->next = t; // Home rough
        last = t;       // t has now become last node
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    int a[] = {3, 5, 7, 10, 15};
    create(a, 5);

    display(first);
}