#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number, last, first, temp, swap, count = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    temp = number;
    count = (int)log10(temp);
    last = temp % 10;

    while (temp >= 10)
    {
        temp /= 10;
    }

    first = temp;
    swap = (last * pow(10, count) + first) + (number - (first * pow(10, count) + last));

    printf("First Digit: %d\n", first);
    printf("Last Digit: %d\n", last);
    printf("Swapped: %d", swap);

    return 0;
}