#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

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

void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void Insert(int pos, int x)
{
    struct Node *t, *p;

    if (pos == 0)
    {
        t = new Node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else if (pos > 0)
    {
        p = first; // to move the pointer back to first node
        for (int i = 0; i < pos - 1 && p; i++)
        {
            p = p->next;
        }

        if (p != NULL)
        {
            t = new Node;
            t->data = x;
            t->next = p->next; // since t is replacing p
            p->next = t;       // since p now has to point at t rather than the next node
        }
    }
}

int Delete(int pos)
{
    struct Node *p, *q;
    int x = -1; // random number

    if (pos == 1)
    {
        x = first->data;
        p = first;
        first = first->next;
        delete p;
    }

    else
    {
        p = first;
        q = NULL;

        for (int i = 0; i < pos - 1 && p; i++)
        {
            q = p;
            p = p->next;
        }

        if (p != NULL)
        {
            q->next = p->next;
            x = p->data;
            delete p;
        }
    }
    return x;
}

int main()
{
    int a[] = {3, 5, 7, 10, 15};
    create(a, 5);

    int z;

    // cout << "Linked list: " << endl;
    // Display(first);

    // Insert(3, 45);
    // cout << "\nLinked list after inserting the element: " << endl;
    // Display(first);

    cout << "\nDeleted " << Delete(3) << endl;
    
    Display(first);
}