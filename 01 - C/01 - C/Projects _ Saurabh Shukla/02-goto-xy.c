#include <stdio.h>

int main()

{

    printf("I can control the coordinates of the cursor.");

    gotoxy(40, 13); // gottoxy(horizontal_value, vertical_value); // previous IDE's had limits such that on output screen only 80 character could be present horizontally and only 25 vertically.

    printf("here");
}