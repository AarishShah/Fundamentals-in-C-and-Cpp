// Introduction to Structures.
/*

int, float, etc are primitive data types since they have already been declared by the compiler.

in structures we define new data types like date, student, etc. which are a combination of primitive data types.

syntax of structure is like this

struct tag
{
 //Variable declarations here
};

this won't consume any memory until we define these data types with variable names.

*/
#include <stdio.h>

struct date
{
    int d, m, y;
};         /*we may also define variable here only*/
sup, soup; // each will ocnsume 6 byte memory

struct date soul; // "date" is now a global variable

int main()
{
    struct date today; // declaration line; like we can type "float today;" here we are using our own data type called "date". Keep in mind that when declaring our own data types we must type "struct" before it.
                       // "date" is a local variable.
}