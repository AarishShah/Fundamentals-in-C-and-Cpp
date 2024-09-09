#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL;

void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void insertlast(int x)
{
    struct Node *t, *last;

    t = new Node;
    t->data = x;
    t->next = NULL;

    if (first == NULL)
    {
        first = last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}

int main()
{
    insertlast(1);
    insertlast(2);
    insertlast(3);
    insertlast(4);
    insertlast(5);
    insertlast(6);
    display(first);
}