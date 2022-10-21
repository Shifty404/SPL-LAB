#include <stdio.h>

int main()
{
    float number1, number2, total;

    printf("Number 1: ");
    scanf(" %f", &number1);

    printf("Number 2: ");
    scanf(" %f", &number2);

    total = number1 * number2;

    printf("Total: %.2f", total);
}