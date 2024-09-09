#include <stdio.h>

struct date
{
    int d, m, y;
};

int main()

{
    struct date today, d1; //  general idea - today and d1 are variables that we have created, their data type is "date". "date" consumes 6 bytes as that is how we have defined the data type "date".

    today.d = 03; // d,m,y are member variables
    today.m = 02;
    today.y = 2022;
}