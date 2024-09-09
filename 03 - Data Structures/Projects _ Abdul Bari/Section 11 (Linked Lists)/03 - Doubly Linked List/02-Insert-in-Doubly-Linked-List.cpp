#include <iostream>
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

struct Node *first = NULL;

void create(int a[], int n)
{
    struct Node *t, *last;
    first = new Node;
    first->data = a[0];
    first->prev = first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = last->next;
        t->prev = last;
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
    cout << endl;
}

int Length(struct Node *p)
{
    int length = 0;

    while (p != NULL)
    {
        length++;
        p = p->next;
    }
    return length;
}

void Insert(struct Node *p, int pos, int x)
{
    struct Node *t;

    if (pos < 0 || pos > Length(p))
        return;

    // if we have to insert before first node
    if (pos == 0)
    {
        t = new Node;
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t; // check: first = t;
    }

    else
    {
        t = new Node;
        t->data = x;

        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }

        t->next = p->next;
        t->prev = p;

        // if there exists a node after 't' then it's previous should at 't'
        if (p->next != NULL)
        {
            p->next->prev = t;
        }
        p->next = t;
    }
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    cout << "The length of the linked list is: " << Length(first) << endl;
    Display(first);

    Insert(first, 0, 100);
    cout << "After insertion: ";
    Display(first);
}