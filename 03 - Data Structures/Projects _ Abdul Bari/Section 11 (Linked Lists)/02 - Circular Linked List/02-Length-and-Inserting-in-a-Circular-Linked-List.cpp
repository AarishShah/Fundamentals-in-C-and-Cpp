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

void Insert(struct Node *p, int pos, int x)
{
    struct Node *t;

    if (pos < 0 || pos > length(p))
        return;
    if (pos == 0)
    {
        t = new Node;
        t->data = x;

        if (Head == NULL)
        {
            Head = t;
            Head->next = Head;
        }
        else
        {
            while (p->next != Head)
            {
                p = p->next;
            }
            p->next = t;
            t->next = Head;
            Head = t;
        }
    }

    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            p = p->next;
        }

        t = new Node;
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}


int main()
{
    int A[] = {2, 3, 4, 5, 6};
    create(A, 5);
    display(Head);

    cout << "\nLength: " << length(Head) << endl;
    
    Insert(Head, 2, 10);
    display(Head);
}