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

void Reverse(struct Node *p)
{
    // just swap pointers (prev with next & next with prev)
    struct Node *temp;
    while (p != NULL)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;

        p = p->prev; // for traversing a linked list, but we will use 'p=p->prev;' instead of 'p=p->next;' because 'p->next' has now interchanged with 'p->prev'
        if (p != NULL && p->next == NULL)
        {
            first = p;
        }
    }
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    Display(first);

    Reverse(first);
    cout << "After reversing: ";
    Display(first);
}