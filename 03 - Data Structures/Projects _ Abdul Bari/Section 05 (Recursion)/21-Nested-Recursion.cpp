// Nested Recursion

#include <stdio.h>
int fun(int n)
{
    if (n > 100)
        return n - 10;
    else // will still work if we comment 'else'
        return fun(fun(n + 11));
}
int main()
{
    int r;
    r = fun(95);
    printf("%d\n", r);
    return 0;
}

// Debug to analyse  