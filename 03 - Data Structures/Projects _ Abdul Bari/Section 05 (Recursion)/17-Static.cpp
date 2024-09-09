// Static Variables in Recursion

#include <stdio.h>
int fun(int n)
{
    static int x = 0; // It's value won't initialise again and again upon fn call but only one time.
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x; // this is not tail recusion as '+ x' is yet to be solved
    }
    return 0;
}
int main()
{
    int r;
    r = fun(5);
    printf("%d\n", r);

    r = fun(5);
    printf("%d\n", r);

    return 0;
}
