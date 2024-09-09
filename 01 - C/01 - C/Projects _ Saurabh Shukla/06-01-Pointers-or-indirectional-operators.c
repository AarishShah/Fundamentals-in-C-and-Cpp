#include <stdio.h>

int main()
{
    int x = 5, *p, **q, ***r; // "*" means indirectional operator

    // levels of indirectionsal operator is decided by the nnumber of asterisk used before it.
    // level of x is zero.
    // llevel of p is one and so on.
    // level 1 can only store the address of one lesser level only i.e., here ***r can't store address of x or p but can only store address of q only.

    p = &x;
    q = &p;
    r = &q;

    // use "%u" instead of "%d".

    // 	"%u" is used to print the unsigned integer value where the unsigned integer means that the variable can hold only positive value.

    // address is only stores between 0 to 2 bytes so it's always positive.

    printf("%d, %u, %u, %u\n", x, p, q, r);
    printf("%d, %d, %d, %d", x, p, q, r);

    // Source: https://youtu.be/8aBNPSIziuw
}