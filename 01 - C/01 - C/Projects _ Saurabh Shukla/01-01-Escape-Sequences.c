#include <stdio.h>

int main()

{

    printf("Understanding Escape Sequences\n");
    printf("New line character\\n\n"); // \n for new line
    printf("te\tst\n");                // \t for tab
    printf("te\bst\n");                // \b for backspace
    printf("te\\st\n");                // \\ for displaing blackslash
    printf("te\"st\n");                // \" for displaying double quotes
    printf("te\rst\n");                // \r for removing everything before \r
}