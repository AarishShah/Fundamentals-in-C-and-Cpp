#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s; // to create array in heap
};

void create(struct Stack *st)
{
    cout << "Enter size of stack: ";
    cin >> st->size;
    st->s = new int[st->size]; // array in heap
    st->top = -1;              // since it's not pointing anywhere in the stack
}

void Display(struct Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.s[i] << " ";
    }
}

void push(struct Stack *st, int x)
{
    if (st->top == st->size - 1) // if stack is full
        cout << "Stack Overflow." << endl;
    else
    {
        st->top++;          // increment top by one
        st->s[st->top] = x; // save value of x in that position ... this statement says: in array[n] store the value of x.
    }
}

int pop(struct Stack *st)
{
    int x = -1;

    if (st->top == -1)
        cout << "Stack Underflow." << endl;
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}

// top value in stack is position 1, below it is 2nd and so on.
int peek(struct Stack st, int pos) // here we aren't modifying the values in the structre so we pass by value and not by reference
{
    int x = -1;
    // the formula we have generated is Index = Top - pos + 1
    if (st.top - pos + 1 < 0)
        cout << "Invalid Index." << endl;
    else
    {
        x = st.s[st.top - pos + 1]; // save the Index in x
    }
    return x;
}

// to get the top most value in a stack
int stackTop(struct Stack st)
{
    if (st.top == -1)
        return -1;

    else
        return st.s[st.top];
}

int isEmpty(struct Stack st)
{
    if (st.top == -1)
        return 1; // true, yes it is empty
    else
        return 0; // false, it is not empty
}

int isFull(struct Stack st)
{
    if (st.top = st.size - 1)
        return 1; // true, yes it is empty
    else
        return 0; // false, it is not empty
}

int main()
{
    struct Stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);

    cout << peek(st, 1) << endl;

    Display(st);
}