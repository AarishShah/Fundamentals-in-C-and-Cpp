// Head Recursion

#include <stdio.h>
void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1);  // recursion is happenning in the head (in first step) of this fn
        printf("%d ", n);
    }
}
int main()
{
    int x = 3;

    fun(x);
    return 0;
}

// Degug to understand the motion of control