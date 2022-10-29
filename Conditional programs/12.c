#include <stdio.h>

int main()
{
    int number1, number2;

    printf("Number 1: ");
    scanf(" %d", &number1);

    printf("Number 2: ");
    scanf(" %d", &number2);

    (number1 == number2) ? printf("Number1 and Number2 are equal!") : printf("Number1 and Number2 are not equal!");

    return 0;
}