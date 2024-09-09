#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL;

void SortedInsert(struct Node *p, int x)
{
    struct Node *t, *q = NULL;

    t = new Node;
    t->data = x;
    t->next = NULL;

    if (first == NULL)
    {
        first = t;
    }
    else
    {
        while (p != NULL && p->data < x)
        {
            q = p;
            p = p->next;
        }

        if (p == first) // inserting before first
        {
            t->next = first;
            first = t;
        }
        else // inseting in middle of the linked list
        {
            t->next = q->next;
            q->next = t;
        }
    }
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

int main()
{
    display(first);
    cout << endl;
    SortedInsert(first, 2);
    SortedInsert(first, 5);
    SortedInsert(first, 3);
    SortedInsert(first, 4);
    SortedInsert(first, 0);
    display(first);
}