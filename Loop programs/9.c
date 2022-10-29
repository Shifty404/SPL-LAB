#include <stdio.h>

int main()
{
    int number, last, first, temp;

    printf("Enter number: ");
    scanf("%d", &number);

    last = number % 10;

    while (number >= 10)
    {
        number /= 10;
    }

    first = number;

    printf("The Sumation of first and last digit of the number: %d", first+last);

    return 0;
}