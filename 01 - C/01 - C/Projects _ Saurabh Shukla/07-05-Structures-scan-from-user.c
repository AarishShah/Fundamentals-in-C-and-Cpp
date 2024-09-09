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

    d1 = today;

    printf("Enter today's date separated by a \"/\"\n");
    scanf("%d/%d/%d", &d1.d, &d1.m, &d1.y); // By adding slash users will also have to add slashes to separate the input he wants enter.
    printf("Date entered: %d/%d/%d", d1.d, d1.m, d1.y);
}