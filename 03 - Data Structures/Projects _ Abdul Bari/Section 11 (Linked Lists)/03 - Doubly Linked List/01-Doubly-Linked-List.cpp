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
    // for first Node
    first = new Node;
    first->data = a[0];
    first->prev = first->next = NULL;
    last = first;

    // for other nodes
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = a[i];
        t->next = last->next; // same as t->next = NULL;
        t->prev = last;
        last->next = t; // previous node should point on latest node
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

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    cout << "The length of the linked list is: " << Length(first) << endl;
    Display(first);
}