#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *first = NULL;

// displaying a linked list
void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

// length of linked list
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

void insert(struct Node *p, int pos, int x)
{
    // to check if index(pos) is valid or not
    if (pos < 0 || pos > count(p)) // 'p' is assigned the value of 'first'
    {
        return;
    }
    else
    {

        struct Node *t;

        // for inserting before linked list
        if (pos == 0)
        {
            t = new Node;
            t->data = x;
            t->next = first;
            first = t;
        }

        else if (pos > 0)
        {
            p = first;
            for (int i = 0; i < pos - 1 && p == NULL; i++) // '|| p == NULL' to prevent runtime error
            {
                p = p->next;
            }
            if (p != NULL) // use 'if' not 'while' since we are not looping, it will work without this command as well but to prevent the porgram from creating new node uselessly, if this condition is not met the block will also not get accessed by control
            {
                t = new Node;
                t->data = x;
                t->next = p->next;
                p->next = t;
            }
        }
    }
}

int main()
{
    insert(first, 0, 10);
    insert(first, 1, 20);
    insert(first, 2, 30);
    insert(first, 3, 40);
    insert(first, 0, 5);
    display(first);
}