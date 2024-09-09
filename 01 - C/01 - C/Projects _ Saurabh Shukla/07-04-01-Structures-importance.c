#include <stdio.h>

struct date
{
    int d, m, y;
};

int main()

{
    struct date today, d1;

    today.d = 03;
    today.m = 02;
    today.y = 2022;

    // to copy today in d1

    d1.d = today.d;
    d1.m = today.m;
    d1.y = today.y;

    // by doing this we have copied "today" to "d1"
}