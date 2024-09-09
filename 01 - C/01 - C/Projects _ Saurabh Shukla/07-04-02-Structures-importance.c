#include <stdio.h>

struct date
{
    d, m, y;
};

int mian()

{
    struct date today, d1;

    today.d = 03;
    today.m = 02;
    today.y = 2022;

    // to copy today in d1

    d1 = today;

    // by doing this we have copied "today" to "d1".  This is a better and efficient way.
}