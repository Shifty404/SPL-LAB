#include <stdio.h>

int main()
{
    int a, b, sum;

    printf("Number 1: ");
    scanf(" %d", &a);

    printf("Number 2: ");
    scanf(" %d", &b);

    sum = a + b;

    printf("Total: %d", sum);
    return 0;
}