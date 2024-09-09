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

int Delete(struct Node *p, int pos)
{
    struct Node *q;
    q = NULL;
    int x = -1;

    if (pos < 0 || pos > count(p))
        return -1;

    if (pos == 1)
    {
        // p = first; // since base addess passed is that of first and first is assigned to p, we don't need to mention it again
        x = first->data;
        first = first->next;
        delete p;
        return x;
    }

    else
    {
        // p = first; // since base addess passed is that of first and first is assigned to p, we don't need to mention it again
        for (int i = 0; i < pos - 1; i++)
        {
            q = p;
            p = p->next;
        }

        x = p->data;
        q->next = p->next;
        delete p;
        return x;
    }
}

int main()
{
    int a[] = {3, 5, 7, 10, 15};
    create(a, 5);
    display(first);
    cout << endl;
    cout << "Deleted: " << Delete(first, 1) << endl;
    display(first);
}