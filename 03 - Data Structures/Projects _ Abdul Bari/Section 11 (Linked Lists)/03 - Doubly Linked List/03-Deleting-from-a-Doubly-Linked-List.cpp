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

int Delete(struct Node *p, int pos)
{
    if (pos < 0 || pos > Length(p))
    {
        return -1;
    }

    int x = -1;

    if (pos == 1)
    {
        first = first->next;

        // if there's only one node in the linked list 'first->next' will become NULL
        if (first != NULL)
        {
            first->prev = NULL;
        }
        x = p->data;
        delete p;
    }

    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }

        p->prev->next = p->next;

        if (p->next != NULL)
        {
            p->next->prev = p->prev;
        }
        x = p->data;
        delete p;
    }

    return x;
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    cout << "The length of the linked list is: " << Length(first) << endl;
    Display(first);

    Delete(first, 1);
    cout << "After deletion: ";
    Display(first);
}