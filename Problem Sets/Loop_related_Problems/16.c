#include <stdio.h>

int main()
{
    int number1, number2, i, GCD, LCM;

    printf("Enter number 1: ");
    scanf(" %d", &number1);

    printf("Enter number 2: ");
    scanf(" %d", &number2);

    for (i = 1; i <= number1 && i <= number2; ++i)
    {
        if (number1 % i == 0 && number2 % i == 0)
            GCD = i;
    }

    LCM = (number1 * number2) / GCD;

    printf("GCD: %d\n", GCD);
    printf("LCM: %d", LCM);

    return 0;
}