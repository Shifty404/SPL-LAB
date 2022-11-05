#include <stdio.h>

int main()
{
    int i, firstNumber = 0, secondNumber = 1, number, sumation;

    printf("Enter number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        if (i == 1)
            printf("%d", secondNumber);
        else
        {
            sumation = firstNumber + secondNumber;
            printf("%d", sumation);
            firstNumber = secondNumber;
            secondNumber = sumation;
        }
        if (i != number)
            printf(", ");
    }

    return 0;
}