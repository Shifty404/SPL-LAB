#include <stdio.h>

int main()
{
    int num, total;

    printf("Enter any number: ");
    scanf("%d", &num);

    for (total = 0; num > 0; num = num / 10)
        total = total + (num % 10);

    printf("Sum of digits: %d", total);

    return 0;
}