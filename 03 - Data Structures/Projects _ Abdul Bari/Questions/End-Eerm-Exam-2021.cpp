#include <iostream>
using namespace std;

struct Student
{
    string Name;
    int Age;
    double Marks;
    struct Student *next;
};

struct Student *first = NULL;

void Insert(char x, int y, double z)
{
    struct Student *t, *last;

    t = new Student;
    t->Name = x;
    t->Age = y;
    t->Marks = z;
    t->next = NULL;

    if (first == NULL)
    {
        first = last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}
void display(struct Student *p)
{
    while (p != NULL && p->Marks < 50)
    {
        cout << p->Name << ", " << p->Age << " years old, has " << p->Marks << " marks" << endl;
        ;
        p = p->next;
    }
}

int main()
{
    Insert('a', 21, 46);
    Insert('b', 22, 47);
    Insert('c', 23, 48);
    Insert('d', 24, 49);
    Insert('e', 25, 49.99);
    Insert('f', 26, 50);
    Insert('g', 27, 51);
    display(first);
}