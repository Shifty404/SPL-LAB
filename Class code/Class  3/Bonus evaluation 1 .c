#include <stdio.h>
#include <math.h>

int main()
{
    int number, temp, count = 0, sumation = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    temp = number;

    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    temp = number;

    while (temp != 0)
    {
        int digit = temp % 10;
        sumation += pow(digit, count);
        temp /= 10;
    }

    if (number == sumation)
        printf("Armstrong!");
    else
        printf("Not armstrong!");

    return 0;
}

// Was first and got 2 bonus number
