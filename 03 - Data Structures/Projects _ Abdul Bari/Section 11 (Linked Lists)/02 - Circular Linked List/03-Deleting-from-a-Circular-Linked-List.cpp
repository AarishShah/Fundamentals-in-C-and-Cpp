#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *Head;

void create(int A[], int n)
{
    struct Node *t, *last;

    Head = new Node;
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display(struct Node *h)
{
    do
    {
        cout << h->data << " ";
        h = h->next;
    } while (h != Head);
}

int length(struct Node *p)
{
    int length = 0;
    do
    {
        length++;
        p = p->next;
    } while (p != Head);
    return length;
}

int Delete(struct Node *p, int pos)
{
    struct Node *q;
    int x;
    if (pos < 0 || pos > length(Head))
        return -1;

    // to delete Head node
    if (pos == 1)
    {
        while (p->next != Head)
        {
            p = p->next;
        }
        x = Head->data;

        // if Linked List has only one Node
        if (Head == p)
        {
            delete p;
            Head = NULL;
        }
        else
        {
            p->next = Head->next;
            delete Head;
            Head = p->next; // Head = p; check
        }
    }
    // if node is not head, then normally delete it as done in singly Linked List
    else
    {
        for (int i = 0; i < pos - 2; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        x = q->data;
        delete q;
    }
    return x;
}

int main()
{
    int A[] = {2, 3, 4, 5, 6};
    create(A, 5);
    display(Head);

    cout << "\nDeleted: " << Delete(Head, 3) << endl;
    display(Head);
}