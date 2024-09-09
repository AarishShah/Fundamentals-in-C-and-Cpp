#include <stdio.h>

int main()

{
    int x, y, z;

    x = sizeof(3);
    y = sizeof(3.14);
    z = sizeof('s'); // because of ASCII the value here would be that of int.
    
    printf("%d %d %d", x, y, z);
}