#include <iostream>
#include <string.h>
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

    if (t == NULL)
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

    if (top == NULL)
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

// to check the precedence of the operator
int precedence(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    else
        return 0;
}

// to check if the character is operand or not
int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
        return 0; // false
    else
        return 1; // true
}

char *InToPost(char *infix)
{
    char *postfix;
    postfix = new char[strlen(infix) + 1 + 1 /*since we added hash in line 120*/];
    int i = 0, j = 0;

    while (infix[i] != '\0')
    {
        if (isOperand(infix[i])) // this will return 1 or 0
        {
            postfix[i] = infix[j]; // if an operand is present in infix array then add that symbol to postfix array
            i++;
            j++;
        }

        else // there's an operator, then check it's precedence
        {
            if (precedence(infix[i]) > precedence(top->data)) // if precedence of the symbol present in the infix array is greater than the precedence of operator present in the stack
            {
                push(infix[i]);
                i++;
            }
            else // if precedence of the symbol present in the infix array is not greater than the precedence of operator present in the stack remove all operators from stack and add it to postfix
            {
                postfix[i] = pop();
                j++;
            }
        }
    }
    while (top != NULL)
    {
        postfix[i] = pop(); // check: postfix[j]
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *infix; // since it will be stored as an array, we are using pointer to copy the base address
    char *postfix;

    push('#'); // so stack is not empty which may result in error

    infix = "a+b*c-d/e";
    postfix = InToPost(infix);

    cout << postfix;
}
