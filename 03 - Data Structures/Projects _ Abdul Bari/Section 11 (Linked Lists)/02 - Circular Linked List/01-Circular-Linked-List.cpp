#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *Head; /*=NULL;*/

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
        t->next = last->next; //(in first iteration) this will make it point at 'Head' because of line 19 ... last of Head is always pointing at Head
        last->next = t;       // (in first iteration) this will make 'Head' (since (last = Head) in line 19) point at next node formed (i.e., 't') ...  previous node should now point at new(latest) node which is 't'
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

void RDisplay(struct Node *h)
{
    static int flag = 0;
    if (h != Head || flag == 0)
    {
        flag = 1;
        printf("%d ", h->data);
        RDisplay(h->next);
    }
    flag = 0;
}

int main()
{
    int A[] = {2, 3, 4, 5, 6};
    create(A, 5);

    display(Head);
}