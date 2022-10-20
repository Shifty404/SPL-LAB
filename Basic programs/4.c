#include <stdio.h>

int main()
{
    float a, b, total;

    printf("Number 1: ");
    scanf(" %f", &a);

    printf("Number 2: ");
    scanf(" %f", &b);

    total = a * b;

    printf("Total: %.2f", total);
}