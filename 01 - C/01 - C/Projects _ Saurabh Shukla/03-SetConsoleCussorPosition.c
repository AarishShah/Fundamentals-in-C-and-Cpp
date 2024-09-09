#include <stdio.h>
#include <windows.h>

int main()

{
    COORD c;

    c.X = 20;
    c.Y = 8;

    printf("I can control the coordinates of the cursor.");

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); // SetConsoleCursorPosition(HANDLE, COORD); same as goto but for modern IDE's

    printf("here");
}