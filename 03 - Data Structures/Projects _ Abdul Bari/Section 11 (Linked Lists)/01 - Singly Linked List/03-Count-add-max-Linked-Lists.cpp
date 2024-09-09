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

int add(struct Node *p)
{
    int sum = 0;
    while (p != 0) // while (p != NULL)
    {
        sum = sum + p->data; // sum += p->data;
        p = p->next;
    }
    return sum;
}

int max(struct Node *p)
{
    int max = INT32_MIN;
    while (p != NULL)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}
int main()
{
    int a[] = {3, 5, 7, 10, 15};
    create(a, 5);

    cout << "Length is: " << count(first) << endl;
    cout << "Sum is: " << add(first) << endl;
    cout << "Max is: " << max(first) << endl;
}