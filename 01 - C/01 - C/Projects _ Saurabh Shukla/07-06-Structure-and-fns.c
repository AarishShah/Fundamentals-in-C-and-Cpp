#include <stdio.h>

struct book input();
void display(struct book);

struct book
{
    int bookid;
    char title[20];
    float price;
};

struct book input() // the return type of this funtion will be "book".
{

    struct book b;

    printf("Enter bookid, title and price.\n");
    scanf("%d", &b.bookid);
    fflush(stdin); // to make the buffer empty. here after scanning value of bookid the scanf fn, data is copied frm buffer, the buffer needs to be empty so that it may store new data to be accepted frm keyboard
    gets(b.title);
    scanf("%f", &b.price);
    return (b);
}

void display(struct book b)
{
    printf("\n %d %s %f", b.bookid, b.title, b.price);
}

void main()
{

    struct book b1;
    b1 = input();
    display(b1);
}