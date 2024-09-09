#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s; // to create array in heap
};

int main()
{
    struct Stack st;
    cout <<"Enter size of stack: ";
    cin>> st.size;

    st.s = new int[st.size]; // array in heap

    st.top = -1; // since it's not pointing anywhere in the stack
}

// when top = -1, stack is empty
// when top = (size - 1) then stack is full