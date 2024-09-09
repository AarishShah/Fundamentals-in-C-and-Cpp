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
struct Node *search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
            return p;
        else
            p = p->next;
    }
    return NULL;
}

int main()
{
    int a[] = {3, 5, 7, 10, 15};
    create(a, 5);

    struct Node *temp;

    temp = search(first, 7);

    if (temp != NULL)
        cout << "Key(" << temp->data << ") found.";
    else
        cout << "Key not found";
}