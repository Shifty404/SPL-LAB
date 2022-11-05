#include <stdio.h>
#include <math.h>

int main()
{
    int number, temp, count = 0, sumation = 0, sumationFL = 0, firstdigit, lastdigit;

    printf("Enter number: ");
    scanf("%d", &number);

    temp = number;

    while (temp != 0)
    {
        int digit = temp % 10;
        sumation += digit;
        temp /= 10;
        count++;
    }

    lastdigit = number % 10;

    while (number >= 10)
        number /= 10;

    firstdigit = number;
    sumationFL = firstdigit + lastdigit;

    printf("First digit: %d\n", firstdigit);
    printf("Last digit: %d\n", lastdigit);
    printf("Sumation of First and Last digit: %d\n", sumationFL);
    printf("Digit in a Number: %d\n", count);
    printf("Sumation of the number: %d\n", sumation);

    if (sumationFL < 8 && sumation % 6 == 0)
        printf("It is a clipto number!");
    else
        printf("It is not a clipto number!");

    return 0;
}
