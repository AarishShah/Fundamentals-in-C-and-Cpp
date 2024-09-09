// Tail Recursion

#include <stdio.h>
void fun(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        fun(n - 1); // recursion is happenning in the tail (at last) of this fn
    }
}
int main()
{
    int x = 3;

    fun(x);
    return 0;
}

// Degug to understand the motion of control