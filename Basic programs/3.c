#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Number 1: ");
    scanf(" %d", &a);

    printf("Number 2: ");
    scanf(" %d", &b);

    printf("a = %d & b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("a = %d & b = %d", a, b);
    return 0;
}