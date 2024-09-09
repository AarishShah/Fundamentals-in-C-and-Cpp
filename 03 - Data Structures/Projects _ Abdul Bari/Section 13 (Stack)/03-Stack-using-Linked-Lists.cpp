#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(int x)
{
    struct Node *t;
    t = new Node;

    if (t == NULL) // condition when Linked list is full (heap is full)
        cout << "Stack Overflow.";
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    struct Node *p;
    int x = -1;

    if (top == NULL) // condition to check if linked list is empty or not
        cout << "Stack Underflow.";
    else
    {
        p = top;
        top = top->next;
        x = p->data;
        delete p;
    }
    return x;
}

void Display()
{
    struct Node *p;
    p = top;

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

// same as view fn
int peek(int pos)
{
    struct Node *p;

    p = top;

    for (int i = 0; i < pos - 1 && p != NULL; i++)
    {
        p = p->next;
    }

    if (p != NULL)
        return p->data;

    else
        return -1;
}

int main()
{
    push(10);
    push(20);
    push(30);

    Display();

    cout << pop() << endl;
}

// complete this program yourself