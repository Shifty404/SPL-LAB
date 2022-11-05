#include <stdio.h>

int main()
{
    int number1, number2, sum;

    printf("Number 1: ");
    scanf(" %d", &number1);

    printf("Number 2: ");
    scanf(" %d", &number2);

    sum = number1 + number2;

    printf("Total: %d", sum);
    return 0;
}