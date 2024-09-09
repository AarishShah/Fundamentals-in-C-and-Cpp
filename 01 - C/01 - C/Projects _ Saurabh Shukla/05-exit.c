#include <stdio.h>
#include <stdlib.h>
int main()

{
    int choice, num1 = 0, num2 = 0, i;

    while (1) // if it is zero then it's false.

    {

        printf("\n\n1 for Addition\n2 for Subtraction\n3 for Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter two numbers that you want to add.\n");
            scanf("%d %d", &num1, &num2);
            printf("The addition of %d and %d is %d", num1, num2, num1 + num2);
            break;

        case 2:
            printf("\nEnter two numbers that you want to subtract.\n");
            scanf("%d %d", &num1, &num2);
            printf("The difference of %d and %d is %d", num1, num2, num1 - num2);
            break;

        case 3:
            exit(0); //this function will end the program and not just the loop.
            break;

        default:
            printf("\nInvalid input.");
        }
    }
}