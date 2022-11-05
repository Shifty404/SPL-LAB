#include <stdio.h>

int main()
{
    int number, multiplication = 1;

    printf("Enter number: ");
    scanf("%d", &number);

    while (number != 0)
    {
        multiplication *= (number % 10);
        number = number / 10;
    }

    printf("Multiplication of digits = %d", multiplication);

    return 0;
}